import ProofWidgets
import Arithmetic_Formalization.Foundations
import Arithmetic_Formalization.Addition
open ProofWidgets
open scoped ProofWidgets.Jsx
open Lean Widget

#html <div style={json% {padding: "10px", backgroundColor: "black"}}><p style={json% {color: "green"}}>Plumbing works!</p></div>
def digitBox (d : Nat) : Html :=
  <div style={json% {
    display: "inline-block",
    border: "2px solid white",
    width: "40px",
    height: "40px",
    textAlign: "center",
    lineHeight: "40px",
    fontSize: "20px",
    color: "white",
    margin: "3px",
    backgroundColor: "black"
  }}>
    {.text s!"{d}"}
  </div>

#html digitBox 7

def numberRow (a : MultiDigit) : Html :=
  let digits := (a.reverse.map (fun d => digitBox d.val)).toArray
  Html.element "div" #[("style", json% {
    display: "flex",
    flexDirection: "row",
    justifyContent: "flex-end"
  })] digits




#html numberRow [⟨1, by omega⟩, ⟨2, by omega⟩, ⟨3, by omega⟩]

def fromNat : Nat → MultiDigit
  | 0 => []
  | n + 1 => ⟨(n + 1) % 10, by omega⟩ :: fromNat ((n + 1) / 10)
termination_by n => n

def computeCarries (a b : MultiDigit) : List Bool :=
  let rec go : MultiDigit → MultiDigit → Bool → List Bool
    | [], [], c =>
        -- include final carry if it exists
        if c then [true] else []
    | [], b :: bs, c =>
        let (_, c') := addDigits ⟨0, by omega⟩ b c
        c' :: go [] bs c'
    | a :: as, [], c =>
        let (_, c') := addDigits a ⟨0, by omega⟩ c
        c' :: go as [] c'
    | a :: as, b :: bs, c =>
        let (_, c') := addDigits a b c
        c' :: go as bs c'
    termination_by a b _ => a.length + b.length
  let carries := go a b false
  match carries with
  | [] => []
  | _ :: _ => false :: carries.dropLast

-- 123 + 91: carries should be [false, true, false] from right to left
#eval computeCarries
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]
  [⟨1, by omega⟩, ⟨9, by omega⟩]
-- expect [false, true, false]

-- Render a single carry indicator above a column
def carryBox (c : Bool) : Html :=
  if c then
    Html.element "div"
      #[("style", json% {
        display: "inline-block",
        width: "40px",
        height: "20px",
        textAlign: "center",
        fontSize: "14px",
        margin: "3px",
        color: "yellow"
      })]
      #[Html.text "1"]
  else
    Html.element "div"
      #[("style", json% {
        display: "inline-block",
        width: "40px",
        height: "20px",
        textAlign: "center",
        fontSize: "14px",
        margin: "3px",
        color: "transparent"
      })]
      #[Html.text " "]


#html carryBox true
#html carryBox false



-- Render the full carry row
def carryRow (carries : List Bool) : Html :=
  let boxes := (carries.reverse.map carryBox).toArray
  Html.element "div"
    #[("style", json% {
      display: "flex",
      flexDirection: "row",
      justifyContent: "flex-end"
    })]
    boxes
#html carryRow [true, false, true]

def additionDisplay (a b : MultiDigit) : Html :=
  let result := verticalAdd a b false
  let carries := computeCarries a b
  let maxLen := max (max a.length b.length) result.length
  let pad (x : MultiDigit) : MultiDigit :=
    List.append x (List.replicate (maxLen - x.length) ⟨0, by omega⟩)
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      padding: "15px",
      backgroundColor: "black",
      color: "white",
      fontFamily: "monospace"
    })]
    #[
      -- Carry row at top
      carryRow carries,
      -- First number
      numberRow (pad a),
      -- Plus sign and second number
      Html.element "div"
        #[("style", json% {
          display: "flex",
          flexDirection: "row",
          alignItems: "center"
        })]
        #[
          Html.element "span"
            #[("style", json% {
              color: "white",
              fontSize: "20px",
              marginRight: "5px",
              lineHeight: "46px"
            })]
            #[.text "+"],
          numberRow (pad b)
        ],
      Html.element "hr"
        #[("style", json% {
          border: "1px solid white",
          margin: "5px 0"
        })]
        #[],
      -- Result
      numberRow (pad result)
    ]

-- Test 1: Single carry in middle column
-- 123 + 091 = 214
#html additionDisplay
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]
  [⟨1, by omega⟩, ⟨9, by omega⟩, ⟨0, by omega⟩]

-- Test 2: Cascading carries
-- 999 + 001 = 1000
#html additionDisplay
  [⟨9, by omega⟩, ⟨9, by omega⟩, ⟨9, by omega⟩]
  [⟨1, by omega⟩, ⟨0, by omega⟩, ⟨0, by omega⟩]

-- Test 3: No carries
-- 123 + 234 = 357
#html additionDisplay
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]
  [⟨4, by omega⟩, ⟨3, by omega⟩, ⟨2, by omega⟩]

-- Test 4: Carry only from units cascading
-- 195 + 005 = 200
#html additionDisplay
  [⟨5, by omega⟩, ⟨9, by omega⟩, ⟨1, by omega⟩]
  [⟨5, by omega⟩, ⟨0, by omega⟩, ⟨0, by omega⟩]

-- Test 5: Different length numbers
-- 99 + 1 = 100
#html additionDisplay
  [⟨9, by omega⟩, ⟨9, by omega⟩]
  [⟨1, by omega⟩]

-- Highlighted digit box for the active column
def digitBoxActive (d : Nat) : Html :=
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      border: "2px solid yellow",
      width: "40px",
      height: "40px",
      textAlign: "center",
      lineHeight: "40px",
      fontSize: "20px",
      color: "yellow",
      margin: "3px",
      backgroundColor: "black"
    })]
    #[Html.text s!"{d}"]

-- Grayed out digit box for inactive columns
def digitBoxInactive (d : Nat) : Html :=
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      border: "2px solid gray",
      width: "40px",
      height: "40px",
      textAlign: "center",
      lineHeight: "40px",
      fontSize: "20px",
      color: "gray",
      margin: "3px",
      backgroundColor: "black"
    })]
    #[Html.text s!"{d}"]

-- Render a number row with column highlighting
-- step = which column is currently active (0 = rightmost)
def numberRowStepped (a : MultiDigit) (step : Nat) : Html :=
  let maxIdx := a.length - 1
  let boxes := (a.reverse.mapIdx (fun i d =>
    -- convert display index to list index
    let listIdx := maxIdx - i
    if listIdx = step
    then digitBoxActive d.val
    else digitBoxInactive d.val)).toArray
  Html.element "div"
    #[("style", json% {
      display: "flex",
      flexDirection: "row",
      justifyContent: "flex-end"
    })]
    boxes

#html numberRowStepped (fromNat 123) 1

-- Result box showing computed digit
def resultBoxComputed (d : Nat) : Html :=
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      border: "2px solid yellow",
      width: "40px",
      height: "40px",
      textAlign: "center",
      lineHeight: "40px",
      fontSize: "20px",
      color: "yellow",
      margin: "3px",
      backgroundColor: "black"
    })]
    #[Html.text s!"{d}"]

-- Result box showing unknown digit
def resultBoxUnknown : Html :=
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      border: "2px solid gray",
      width: "40px",
      height: "40px",
      textAlign: "center",
      lineHeight: "40px",
      fontSize: "20px",
      color: "gray",
      margin: "3px",
      backgroundColor: "black"
    })]
    #[Html.text "?"]

-- Result row: computed digits show actual value, future digits show ?
def resultRowStepped (result : MultiDigit) (step : Nat) : Html :=
  let maxIdx := result.length - 1
  let boxes := (result.reverse.mapIdx (fun i d =>
    let listIdx := maxIdx - i
    if listIdx ≤ step
    then resultBoxComputed d.val
    else resultBoxUnknown)).toArray
  Html.element "div"
    #[("style", json% {
      display: "flex",
      flexDirection: "row",
      justifyContent: "flex-end"
    })]
    boxes

-- Show addition step by step
-- step 0 = units column, step 1 = tens column, etc.
def additionStepDisplay (a b : MultiDigit) (step : Nat) : Html :=
  let result := verticalAdd a b false
  let carries := computeCarries a b
  let maxLen := max (max a.length b.length) result.length
  let pad (x : MultiDigit) : MultiDigit :=
    List.append x (List.replicate (maxLen - x.length) ⟨0, by omega⟩)
  let paddedA := pad a
  let paddedB := pad b
  let paddedResult := pad result
  Html.element "div"
    #[("style", json% {
      display: "inline-block",
      padding: "15px",
      backgroundColor: "black",
      color: "white",
      fontFamily: "monospace"
    })]
    #[
      -- carry row showing carries up to current step
      carryRow (carries.mapIdx (fun i c => c && i ≤ step)),
      -- first number with current column highlighted
      numberRowStepped paddedA step,
      -- plus sign and second number
      Html.element "div"
        #[("style", json% {
          display: "flex",
          flexDirection: "row",
          alignItems: "center"
        })]
        #[
          Html.element "span"
            #[("style", json% {
              color: "white",
              fontSize: "20px",
              marginRight: "5px",
              lineHeight: "46px"
            })]
            #[.text "+"],
          numberRowStepped paddedB step
        ],
      Html.element "hr"
        #[("style", json% {
          border: "1px solid white",
          margin: "5px 0"
        })]
        #[],
      -- result row with ? for uncomputed columns
      resultRowStepped paddedResult step
    ]

-- 123 + 91, step through columns
#html additionStepDisplay (fromNat 123) (fromNat 91) 0  -- units
#html additionStepDisplay (fromNat 123) (fromNat 91) 1  -- tens
#html additionStepDisplay (fromNat 123) (fromNat 91) 2  -- hundreds

-- toNat of first n digits of a MultiDigit number

-- Get carry value going into column k
def getCarryAt (a b : MultiDigit) (k : Nat) : Bool :=
  let carries := computeCarries a b
  carries.getD k false

-- carry into column 0 = false (no initial carry)
#eval getCarryAt (fromNat 123) (fromNat 91) 0  -- expect false

-- carry into column 1 = false (3+1=4, no carry)
#eval getCarryAt (fromNat 123) (fromNat 91) 1  -- expect false

-- carry into column 2 = true (2+9=11, carry out)
#eval getCarryAt (fromNat 123) (fromNat 91) 2  -- expect true

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


def computeCarries (a b : MultiDigit) : List Bool :=
  let rec go : MultiDigit → MultiDigit → Bool → List Bool
    | [], [], _ => []
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
  go a b false

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

#html additionDisplay
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]
  [⟨1, by omega⟩, ⟨9, by omega⟩]

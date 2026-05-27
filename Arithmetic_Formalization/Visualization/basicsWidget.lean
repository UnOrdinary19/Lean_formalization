import ProofWidgets
import Arithmetic_Formalization.Foundations

open ProofWidgets
open scoped ProofWidgets.Jsx
open Lean Widget

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

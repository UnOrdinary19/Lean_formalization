import Arithmetic_Formalization.Foundations
import Arithmetic_Formalization.Addition

--Let us as before start with listing out the possible
--single digit x single digit multiplications

def mulTable : Digit → Digit → Digit × Digit
  | ⟨0, _⟩, _ => (⟨0, by omega⟩, ⟨0, by omega⟩)
  | _, ⟨0, _⟩ => (⟨0, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨1, _⟩ => (⟨1, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨2, _⟩ => (⟨2, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨3, _⟩ => (⟨3, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨4, _⟩ => (⟨4, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨5, _⟩ => (⟨5, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨6, _⟩ => (⟨6, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨7, _⟩ => (⟨7, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨8, _⟩ => (⟨8, by omega⟩, ⟨0, by omega⟩)
  | ⟨1, _⟩, ⟨9, _⟩ => (⟨9, by omega⟩, ⟨0, by omega⟩)
  | ⟨2, _⟩, ⟨1, _⟩ => (⟨2, by omega⟩, ⟨0, by omega⟩)
  | ⟨2, _⟩, ⟨2, _⟩ => (⟨4, by omega⟩, ⟨0, by omega⟩)
  | ⟨2, _⟩, ⟨3, _⟩ => (⟨6, by omega⟩, ⟨0, by omega⟩)
  | ⟨2, _⟩, ⟨4, _⟩ => (⟨8, by omega⟩, ⟨0, by omega⟩)
  | ⟨2, _⟩, ⟨5, _⟩ => (⟨0, by omega⟩, ⟨1, by omega⟩)
  | ⟨2, _⟩, ⟨6, _⟩ => (⟨2, by omega⟩, ⟨1, by omega⟩)
  | ⟨2, _⟩, ⟨7, _⟩ => (⟨4, by omega⟩, ⟨1, by omega⟩)
  | ⟨2, _⟩, ⟨8, _⟩ => (⟨6, by omega⟩, ⟨1, by omega⟩)
  | ⟨2, _⟩, ⟨9, _⟩ => (⟨8, by omega⟩, ⟨1, by omega⟩)
  | ⟨3, _⟩, ⟨1, _⟩ => (⟨3, by omega⟩, ⟨0, by omega⟩)
  | ⟨3, _⟩, ⟨2, _⟩ => (⟨6, by omega⟩, ⟨0, by omega⟩)
  | ⟨3, _⟩, ⟨3, _⟩ => (⟨9, by omega⟩, ⟨0, by omega⟩)
  | ⟨3, _⟩, ⟨4, _⟩ => (⟨2, by omega⟩, ⟨1, by omega⟩)
  | ⟨3, _⟩, ⟨5, _⟩ => (⟨5, by omega⟩, ⟨1, by omega⟩)
  | ⟨3, _⟩, ⟨6, _⟩ => (⟨8, by omega⟩, ⟨1, by omega⟩)
  | ⟨3, _⟩, ⟨7, _⟩ => (⟨1, by omega⟩, ⟨2, by omega⟩)
  | ⟨3, _⟩, ⟨8, _⟩ => (⟨4, by omega⟩, ⟨2, by omega⟩)
  | ⟨3, _⟩, ⟨9, _⟩ => (⟨7, by omega⟩, ⟨2, by omega⟩)
  | ⟨4, _⟩, ⟨1, _⟩ => (⟨4, by omega⟩, ⟨0, by omega⟩)
  | ⟨4, _⟩, ⟨2, _⟩ => (⟨8, by omega⟩, ⟨0, by omega⟩)
  | ⟨4, _⟩, ⟨3, _⟩ => (⟨2, by omega⟩, ⟨1, by omega⟩)
  | ⟨4, _⟩, ⟨4, _⟩ => (⟨6, by omega⟩, ⟨1, by omega⟩)
  | ⟨4, _⟩, ⟨5, _⟩ => (⟨0, by omega⟩, ⟨2, by omega⟩)
  | ⟨4, _⟩, ⟨6, _⟩ => (⟨4, by omega⟩, ⟨2, by omega⟩)
  | ⟨4, _⟩, ⟨7, _⟩ => (⟨8, by omega⟩, ⟨2, by omega⟩)
  | ⟨4, _⟩, ⟨8, _⟩ => (⟨2, by omega⟩, ⟨3, by omega⟩)
  | ⟨4, _⟩, ⟨9, _⟩ => (⟨6, by omega⟩, ⟨3, by omega⟩)
  | ⟨5, _⟩, ⟨1, _⟩ => (⟨5, by omega⟩, ⟨0, by omega⟩)
  | ⟨5, _⟩, ⟨2, _⟩ => (⟨0, by omega⟩, ⟨1, by omega⟩)
  | ⟨5, _⟩, ⟨3, _⟩ => (⟨5, by omega⟩, ⟨1, by omega⟩)
  | ⟨5, _⟩, ⟨4, _⟩ => (⟨0, by omega⟩, ⟨2, by omega⟩)
  | ⟨5, _⟩, ⟨5, _⟩ => (⟨5, by omega⟩, ⟨2, by omega⟩)
  | ⟨5, _⟩, ⟨6, _⟩ => (⟨0, by omega⟩, ⟨3, by omega⟩)
  | ⟨5, _⟩, ⟨7, _⟩ => (⟨5, by omega⟩, ⟨3, by omega⟩)
  | ⟨5, _⟩, ⟨8, _⟩ => (⟨0, by omega⟩, ⟨4, by omega⟩)
  | ⟨5, _⟩, ⟨9, _⟩ => (⟨5, by omega⟩, ⟨4, by omega⟩)
  | ⟨6, _⟩, ⟨1, _⟩ => (⟨6, by omega⟩, ⟨0, by omega⟩)
  | ⟨6, _⟩, ⟨2, _⟩ => (⟨2, by omega⟩, ⟨1, by omega⟩)
  | ⟨6, _⟩, ⟨3, _⟩ => (⟨8, by omega⟩, ⟨1, by omega⟩)
  | ⟨6, _⟩, ⟨4, _⟩ => (⟨4, by omega⟩, ⟨2, by omega⟩)
  | ⟨6, _⟩, ⟨5, _⟩ => (⟨0, by omega⟩, ⟨3, by omega⟩)
  | ⟨6, _⟩, ⟨6, _⟩ => (⟨6, by omega⟩, ⟨3, by omega⟩)
  | ⟨6, _⟩, ⟨7, _⟩ => (⟨2, by omega⟩, ⟨4, by omega⟩)
  | ⟨6, _⟩, ⟨8, _⟩ => (⟨8, by omega⟩, ⟨4, by omega⟩)
  | ⟨6, _⟩, ⟨9, _⟩ => (⟨4, by omega⟩, ⟨5, by omega⟩)
  | ⟨7, _⟩, ⟨1, _⟩ => (⟨7, by omega⟩, ⟨0, by omega⟩)
  | ⟨7, _⟩, ⟨2, _⟩ => (⟨4, by omega⟩, ⟨1, by omega⟩)
  | ⟨7, _⟩, ⟨3, _⟩ => (⟨1, by omega⟩, ⟨2, by omega⟩)
  | ⟨7, _⟩, ⟨4, _⟩ => (⟨8, by omega⟩, ⟨2, by omega⟩)
  | ⟨7, _⟩, ⟨5, _⟩ => (⟨5, by omega⟩, ⟨3, by omega⟩)
  | ⟨7, _⟩, ⟨6, _⟩ => (⟨2, by omega⟩, ⟨4, by omega⟩)
  | ⟨7, _⟩, ⟨7, _⟩ => (⟨9, by omega⟩, ⟨4, by omega⟩)
  | ⟨7, _⟩, ⟨8, _⟩ => (⟨6, by omega⟩, ⟨5, by omega⟩)
  | ⟨7, _⟩, ⟨9, _⟩ => (⟨3, by omega⟩, ⟨6, by omega⟩)
  | ⟨8, _⟩, ⟨1, _⟩ => (⟨8, by omega⟩, ⟨0, by omega⟩)
  | ⟨8, _⟩, ⟨2, _⟩ => (⟨6, by omega⟩, ⟨1, by omega⟩)
  | ⟨8, _⟩, ⟨3, _⟩ => (⟨4, by omega⟩, ⟨2, by omega⟩)
  | ⟨8, _⟩, ⟨4, _⟩ => (⟨2, by omega⟩, ⟨3, by omega⟩)
  | ⟨8, _⟩, ⟨5, _⟩ => (⟨0, by omega⟩, ⟨4, by omega⟩)
  | ⟨8, _⟩, ⟨6, _⟩ => (⟨8, by omega⟩, ⟨4, by omega⟩)
  | ⟨8, _⟩, ⟨7, _⟩ => (⟨6, by omega⟩, ⟨5, by omega⟩)
  | ⟨8, _⟩, ⟨8, _⟩ => (⟨4, by omega⟩, ⟨6, by omega⟩)
  | ⟨8, _⟩, ⟨9, _⟩ => (⟨2, by omega⟩, ⟨7, by omega⟩)
  | ⟨9, _⟩, ⟨1, _⟩ => (⟨9, by omega⟩, ⟨0, by omega⟩)
  | ⟨9, _⟩, ⟨2, _⟩ => (⟨8, by omega⟩, ⟨1, by omega⟩)
  | ⟨9, _⟩, ⟨3, _⟩ => (⟨7, by omega⟩, ⟨2, by omega⟩)
  | ⟨9, _⟩, ⟨4, _⟩ => (⟨6, by omega⟩, ⟨3, by omega⟩)
  | ⟨9, _⟩, ⟨5, _⟩ => (⟨5, by omega⟩, ⟨4, by omega⟩)
  | ⟨9, _⟩, ⟨6, _⟩ => (⟨4, by omega⟩, ⟨5, by omega⟩)
  | ⟨9, _⟩, ⟨7, _⟩ => (⟨3, by omega⟩, ⟨6, by omega⟩)
  | ⟨9, _⟩, ⟨8, _⟩ => (⟨2, by omega⟩, ⟨7, by omega⟩)
  | ⟨9, _⟩, ⟨9, _⟩ => (⟨1, by omega⟩, ⟨8, by omega⟩)
  | ⟨n+10, h⟩, _ => absurd h (by omega)
  | _, ⟨n+10, h⟩ => absurd h (by omega)

--Some test cases
#eval mulTable ⟨3, by omega⟩ ⟨7, by omega⟩  -- expect (1, 2) -- 3×7=21
#eval mulTable ⟨9, by omega⟩ ⟨9, by omega⟩  -- expect (1, 8) -- 9×9=81
#eval mulTable ⟨5, by omega⟩ ⟨5, by omega⟩  -- expect (5, 2) -- 5×5=25
#eval mulTable ⟨0, by omega⟩ ⟨7, by omega⟩  -- expect (0, 0) -- 0×7=0

--Proving correctness of the table boils down
--to unfolding all cases
theorem mulTable_correct (a b : Digit) :
    (mulTable a b).1.val + 10 * (mulTable a b).2.val =
    a.val * b.val := by
  fin_cases a <;> fin_cases b <;> simp [mulTable]

-- Multiply a MultiDigit number by a single digit
-- carry is a Digit representing the carry from the previous column
def mulDigit : MultiDigit → Digit → Digit → MultiDigit
  | [], _, ⟨0, _⟩ =>
      -- No remaining digits and no carry -- multiplication complete
      []
  | [], _, carry =>
      -- No remaining digits but carry remains
      -- Write the carry as the final most significant digit
      [carry]
  | d :: ds, b, carry =>
      -- Main case: multiply current digit d by b
      -- then handle the incoming carry from the previous column

      -- Step 1: Look up d × b in the times table
      -- units is the ones digit of the product
      -- tens is the tens digit of the product (the carry from multiplication)
      let (units, tens) := mulTable d b
      -- Step 2: Add the incoming carry to the units digit
      -- This may produce a new carry carry' if units + carry ≥ 10
      let (units', carry') := addTable units carry
      -- Step 3: Convert Bool carry to Digit for the next addition
      -- addTable returns a Bool carry but addTable expects a Digit
      let carryDigit : Digit := if carry' then ⟨1, by omega⟩ else ⟨0, by omega⟩
      -- Step 4: Combine the tens digit from multiplication
      -- with any carry produced in Step 2
      -- This gives the carry to pass to the next column
      let (finalCarry, _) := addTable tens carryDigit
      -- Step 5: Write the units digit and recurse on remaining digits
      -- passing the combined carry forward to the next column
      units' :: mulDigit ds b finalCarry
termination_by a _ _ => a.length
-- Termination: the first list gets shorter at every recursive call

--Some test cases
-- 123 × 7 = 861
#eval toNat (mulDigit
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]
  ⟨7, by omega⟩
  ⟨0, by omega⟩)
-- expect 861

-- 99 × 9 = 891
#eval toNat (mulDigit
  [⟨9, by omega⟩, ⟨9, by omega⟩]
  ⟨9, by omega⟩
  ⟨0, by omega⟩)
-- expect 891

-- 0 × 5 = 0
#eval toNat (mulDigit [] ⟨5, by omega⟩ ⟨0, by omega⟩)
-- expect 0

--Now lets us prove correctness

--first a helper lemma
-- The value of two concatenated digit lists
-- equals the first number plus 10^length * the second number
-- This is the key lemma for reasoning about shifted partial products
theorem toNat_append (a b : List Digit) :
  toNat (a ++ b) = toNat a + 10^(a.length) * toNat b := by
  -- Structural induction on the first list 'a'
  induction a with
  | nil =>
    -- Base case: 'a' is empty. toNat([]) evaluates to 0.
    -- Equation trivially reduces to: toNat b = 0 + 1 * toNat b.
    simp [toNat]
  | cons d ds ih =>
    -- 1. Unfold toNat to extract the head digit 'd' from the combined list.
    simp [toNat]
    -- 2. Substitute the inductive assumption for the tail 'ds'.
    rw [ih]
    -- 3. Solve the algebra. 'ring' natively groups the terms and matches
    -- the outer '10 *' to the '+ 1' in the exponent (10^(ds.length + 1)).
    ring

-- Single digit multiplication is correct:
-- the result represents toNat a * b + carry

set_option maxHeartbeats 0 in
-- We disable the heartbeat limit here because the proof requires
-- exhaustive case analysis over all combinations of digits (0-9)
-- and carry values (0-9), generating up to 1000 concrete cases.
-- Each case is closed by computation but the sheer number of cases
-- exceeds Lean's default heartbeat limit.
-- This is intentional and safe -- the proof is purely computational.
theorem mulDigit_correct (a : MultiDigit) (b : Digit) (carry : Digit) :
    toNat (mulDigit a b carry) = toNat a * b.val + carry.val := by
  induction a generalizing carry with
  | nil =>
    -- Base case: empty list
    -- expand all carry and b combinations
    -- rfl closes since both sides reduce to same literal
    fin_cases carry <;> fin_cases b <;>
    simp only [mulDigit, toNat]
  | cons d ds ih =>
    -- Recursive case: current digit d, remaining digits ds
    simp only [mulDigit, toNat]
    -- correctness of times table lookup for d × b
    have hmul := mulTable_correct d b
    -- correctness of adding incoming carry to units digit
    have hadd1 := addTable_correct (mulTable d b).1 carry
    -- converts Bool carry from addTable to Digit for next addTable call
    set carryDigit : Digit :=
      if (addTable (mulTable d b).1 carry).2
      then ⟨1, by omega⟩
      else ⟨0, by omega⟩ with hcd
    -- correctness of combining tens digit with carryDigit
    have hadd2 := addTable_correct (mulTable d b).2 carryDigit
    -- inductive hypothesis applied with new carry
    have hih := ih (addTable (mulTable d b).2 carryDigit).1
    -- expand all digit and carry combinations
    -- with everything concrete simp_all reduces to arithmetic
    -- omega closes each case
    fin_cases d <;> fin_cases b <;> fin_cases carry <;>
    simp_all [mulTable, addTable, carryVal] <;>
    omega

-- Full Multi-Digit Multiplication using a Running Sum Accumulator
def mulHelper (a : MultiDigit) (b : MultiDigit) (acc : MultiDigit) : MultiDigit :=
  match b with
  | [] => acc  -- Base case: multiplier digits exhausted, return the accumulated sum
  | d :: ds =>
    -- 1. Multiply the current shifted 'a' by the single multiplier digit 'd'
    -- We pass an initial digit carry of 0 matching mulDigit definition
    let row := mulDigit a d ⟨0, by omega⟩

    -- 2. Add this row to our running total using  verticalAdd with an initial carry of false
    let newAcc := verticalAdd acc row false

    -- 3. Shift 'a' left by a factor of 10 for the next place-value position.
    -- Prepending 0 to a LSB first list multiplies its total value by 10.
    let shiftedA := ⟨0, by omega⟩ :: a

    -- 4. Recurse into the remaining digits of the multiplier
    mulHelper shiftedA ds newAcc

-- The top-level multiplication
def mulActual (a b : MultiDigit) : MultiDigit :=
  mulHelper a b []

-- Test Case 1: 123 × 891 = 109593
#eval toNat (mulActual
  [⟨3, by omega⟩, ⟨2, by omega⟩, ⟨1, by omega⟩]   -- 123
  [⟨1, by omega⟩, ⟨9, by omega⟩, ⟨8, by omega⟩])  -- 891
-- Expects: 109593

-- Test Case 2: 99 × 9 = 891
#eval toNat (mulActual
  [⟨9, by omega⟩, ⟨9, by omega⟩]                 -- 99
  [⟨9, by omega⟩])                               -- 9
-- Expects: 891

-- Test Case 3: 456 × 0 = 0
#eval toNat (mulActual
  [⟨6, by omega⟩, ⟨5, by omega⟩, ⟨4, by omega⟩]   -- 456
  [])                                            -- 0 (Empty list representation)
-- Expects: 0

--Correctness Proof
--Let us first prove the shifting property
theorem toNat_cons_zero (a : MultiDigit) :
    toNat (⟨0, by omega⟩ :: a) = 10 * toNat a := by
  simp [toNat]
-- simple unfolding of the new number plus some algebraic multiplication is
-- sufficient to finish the proof

theorem mulHelper_correct (a b : MultiDigit) (acc : MultiDigit) :
    toNat (mulHelper a b acc) =
    toNat acc + toNat a * toNat b := by
  -- Induct on b generalizing a and acc
  -- both change at every recursive call
  induction b generalizing a acc with
  | nil =>
    -- Base case: b is empty
    -- mulHelper returns acc directly
    -- toNat acc + toNat a * 0 = toNat acc
    simp [mulHelper, toNat]
  | cons d ds ih =>
    -- Recursive case: current digit d, remaining digits ds
    simp only [mulHelper, toNat]
    -- correctness of multiplying a by single digit d
    have hmul := mulDigit_correct a d ⟨0, by omega⟩
    -- toNat of shifted a is 10 * toNat a
    have hshift := toNat_cons_zero a
    -- apply inductive hypothesis to shifted a and new acc
    have hih := ih (⟨0, by omega⟩ :: a) (verticalAdd acc (mulDigit a d ⟨0, by omega⟩) false)
    -- verticalAdd_correct connects addition to natural number addition
    have hadd := verticalAdd_correct' acc (mulDigit a d ⟨0, by omega⟩)
    -- combine everything
    simp [toNat, mulDigit_correct] at *
    linarith

-- Main correctness theorem
-- mulActual is just mulHelper with empty accumulator
-- toNat [] = 0 so the accumulator term vanishes
theorem mulActual_correct (a b : MultiDigit) :
    toNat (mulActual a b) = toNat a * toNat b := by
  simp [mulActual, mulHelper_correct, toNat]

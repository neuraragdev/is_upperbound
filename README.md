# is_upperbound
is upper bound to of array


Problem > 
    Given a integer array "arr" and a integer value "value", we must determine yeah the value is upper bound of the array. 

Specification: 
    Const arr: Array[0, N) of Int;
    Const value: Int;
    Var is_upper: Bool;
    { P: N >= 0 }
        S
    { Q: is_upper = 〈 ∀ i : 0 ≤ i < N : arr[i] ≤ value 〉 }

Derivation: 
    Technique: replace constant for variable.

Program: 
    Const arr: Array[0, N) of Int;
    Const value: Int;
    Var is_upper: Bool;
    { P: N >= 0 }
        is_upper, i := true, 0;
        do i < N ->
            is_upper, i := is_upper ∧ (arr[i] <= value), i + 1;
        od
    { Q: is_upper = 〈 ∀ i : 0 ≤ i < N : arr[i] ≤ value 〉 }


Note: The code in C language is in the is_upperbound.c file.


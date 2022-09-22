# DAY 2

## Question-1
- Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
- Given a roman numeral, convert it to an integer.
    Symbol       Value
    I             1
    V             5
    X             10
    L             50
    C             100
    D             500
    M             1000

## Solution
- Iterate from the back of the list. i.e from right to left and initialize a variable num to the last element of the string.
- If i >= i+1, then add i to num, else subtract i from num.
- Return num.

# DAY 4

## Question-1
- You are given a string S. Suppose a character 'c' occurs consecutively X times in the string. Replace these consecutive occurrences of the character 'c' with (X, c) in the string.

```
Input: 1222311
Output: (1, 1) (3, 2) (1, 3) (2, 1)
```

## Solution
- Using the itertools groupby function, group the list according to the occurences of each character.
```
groupby(S, None)
```

## Question-2
- The first line contains a string, num which is the given number.
- Print ten space-separated integers in a single line denoting the frequency of each digit from  to 0 - 9.

```
Input: a11472o5t6
Output: 0 2 1 0 1 1 1 1 0 0
```

## Solution
- Check whether the given character is a digit, if so increase the count of the respective digit
- Display the count of each digit from 0 - 9

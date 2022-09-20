# DAY 1

## Question-1
- Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
- You may assume that each input would have exactly one solution, and you may not use the same element twice.
- You can return the answer in any order.

## Soution: 
- Initialize two loops, one starting from the first index and the second one starting from the index that is just once ahead.
- If the sum of the two indices is equal to the target return the indices.
<<<<<<< HEAD


## Question-2
- Given an integer x, return true if x is palindrome integer.

## Solution:
- Find the last digit of the number by using the modulo operator.
- Now add the digit to reversed number which is initially initialized to 0.
- Divide the number by 10 and continue steps 1 and 2 until number is greater than zero.
- If the reversed number is equal to the entered number and is greater than or equal to zero, the number is a palindrome. Else it isn't a palindrome.
> Here the problem faced was to check negative numbers and weather the number is just 0. Negative numbers are not palindrome numbers.

## Problem: Two Sum (Easy)

Link: https://leetcode.com/problems/two-sum/

### Approach

I used two nested loops to check every possible pair of numbers.
If the sum of two numbers is equal to the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The array may contain duplicate values, so each pair of different indices must be checked.
The solution should return the indices of the two numbers whose sum equals the target.
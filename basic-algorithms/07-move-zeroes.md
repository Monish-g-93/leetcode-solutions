## Problem: Move Zeroes (Easy–Medium)

Link: https://leetcode.com/problems/move-zeroes/

### Approach

I used a pointer to keep track of the position where the next non-zero element should be placed.
Whenever I find a non-zero element, I swap it with the element at the pointer position.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

All zeroes are moved to the end of the array while maintaining the relative order of the non-zero elements.
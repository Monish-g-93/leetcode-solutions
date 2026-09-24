## Problem: Binary Search (Easy–Medium)

Link: https://leetcode.com/problems/binary-search/

### Approach

I used binary search on the sorted array.
I check the middle element and remove the half that cannot contain the target.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The array must be sorted for binary search.
If the target is not found, the answer is -1.
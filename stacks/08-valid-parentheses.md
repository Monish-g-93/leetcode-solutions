## Problem: Valid Parentheses (Easy–Medium)

Link: https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets.
When a closing bracket is found, I check whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The brackets must be closed in the correct order.
If the brackets are not properly matched, the string is invalid.
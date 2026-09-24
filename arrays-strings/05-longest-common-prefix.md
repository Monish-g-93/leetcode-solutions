## Problem: Longest Common Prefix (Easy)

Link: https://leetcode.com/problems/longest-common-prefix/

### Approach

I take the first string as the initial prefix and compare it with each remaining string.
The prefix is shortened until it matches the beginning of every string.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

If the strings do not have any common starting characters, the result is an empty string.
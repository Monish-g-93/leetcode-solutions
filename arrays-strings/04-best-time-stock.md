## Problem: Best Time to Buy and Sell Stock (Easy)

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum price seen so far.
For every price, I calculate the possible profit and keep the maximum profit found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, no profitable transaction is possible, so the answer is 0
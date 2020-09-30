## Move Zeroes

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Link : https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3286/

```
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: [1]
Output: [1]

Input: [0,0]
Output: [0,0]
```

Things to consider

* You must do this in-place without making a copy of the array.
* Minimize the total number of operations.
* Try to do it in O(n) time complexity
* A two pointer approach is recommended. Where one pointer keeps track of where to place the element and the other iterates the array to find the elements.
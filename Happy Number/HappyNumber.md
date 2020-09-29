## Happy Number

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.
Link : https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3284/

```
Input: 19
Output: true
Explanation: 
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
```

1 and 7 are the examples of happy numbers.


You should consider all of the following approaches

* Concept of fast pointer and slow pointer to detect the presence of loop. (slow)
* Concept of loop detection by keeping track of all the visited numbers. If a number repeats then there will be a cycle. (faster than previous approach)
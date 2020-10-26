## Dynamic Programming

Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial.
They are usually either combinatorial or optimization problems.

For a problem to be a good candidate for Dynamic Programming, it should have the following

1. Optimal substructure
2. Overlapping subproblems

# Different Ways of Dynamic Programming

There are following two different ways to store the values so that the values of a sub-problem can be reused. Here, will discuss two patterns of solving DP problem:

1. Tabulation ( Bottom Up)
2. Memoization ( Top Down)


# Tabulation Method – Bottom Up Dynamic Programming 

```
// Tabulated version to find factorial of x.
int dp[MAXN];

// base case
int dp[0] = 1;
for (int i = 1; i< =n; i++)
{
    dp[i] = dp[i-1] * i;
}
```

# Memoization Method – Top Down Dynamic Programming 

```
// Memoized version to find factorial x.
// To speed up we store the values
// of calculated states

// initialized to -1
int dp[MAXN]

// return fact x!
int solve(int x)
{
    if (x==0)
        return 1;
    if (dp[x]!=-1)
        return dp[x];
    return (dp[x] = x * solve(x-1));
}
```


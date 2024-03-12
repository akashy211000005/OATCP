# OATCP

## Coin Problem:

Certainly! The algorithm uses dynamic programming to count the number of ways to construct a sum n by throwing a dice one or more times. Here's a step-by-step explanation of how the algorithm works:

We create a vector dp of size (n + 1) to store the results of subproblems. Each element dp[i] represents the number of ways to obtain the sum i using the outcomes of dice throws.

Initialize dp[0] to 1 because there is one way to get a sum of 0 (no throws).

Use two nested loops:

The outer loop (for i) iterates over all possible sums from 1 to n. The inner loop (for j) simulates the outcomes of a dice throw, ranging from 1 to 6. We update the dp array for each possible outcome. Update the dp[i] by adding the value of dp[i - j] for each possible outcome j. This step accumulates the number of ways to reach the current sum i using different outcomes of a dice throw.

The final result is stored in dp[n], representing the number of ways to construct the sum n by throwing a dice.

## GridPaths


Read the size of the grid, n.

Initialize a matrix dp of size (n+1) x (n+1) with all elements set to 0.

Set dp[0][0] = 1.

Loop over each cell (i, j) in the grid:

a. Read the character s[j] for each row i.

b. If s[j] is not '', update dp[i][j] by adding dp[i-1][j] and dp[i][j-1], taking modulo 1e9+7.

c. If s[j] is '', set dp[i][j] to 0.

Output dp[n-1][n-1] % (1e9+7) if n > 0, else output -1

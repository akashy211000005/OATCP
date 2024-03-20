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

## Maximum Product Subarray

Iterate through the array.
. Update left_product by multiplying the current element with the previous product 
  if it's non-zero, else set it to the current element.
. Update right_product by multiplying the current element from the end with the 
  previous product if it's non-zero, else set it to the current element.
. Update max_product with the maximum of max_product, left_product, and right_product.
. After the iteration, max_product holds the maximum product of a subarray.

## Bersu Ball

1.Sort Dancing Skills:
   . Sort the dancing skills of boys and girls in non-decreasing order.

2.Pairing Process:
  . Initialize variables 'i' and 'j' to track the current position in the sorted lists 
  . of boys' and girls' dancing skills, respectively.
  . Initialize a variable 'res' to count the number of pairs formed.
  . Iterate while 'i' is less than the number of boys and 'j' is less than the number 
    of girls.
   Within the loop:
     . Check if the absolute difference between the dancing skill of boy 'b[i]' and girl 'g[j]' is at most 1.
        If it is, increment both 'i' and 'j' to move to the next boy and girl, 
        respectively, and increment 'res' to count the formed pair.
     . If the dancing skill of boy 'b[i]' is less than that of girl 'g[j]', increment 'i'.
     . If the dancing skill of girl 'g[j]' is less than that of boy 'b[i]', increment 'j'.

3.Output:
   . Output the value of 'res', representing the largest possible number of pairs formed.

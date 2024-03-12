#include <iostream>
#include <vector>

using namespace std;

int countWays(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 && j <= i; j++)
        {
            dp[i] += dp[i - j];
        }
    }
    return dp[n];
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        int ways = countWays(n);
        cout << ways << endl;
    }
    return 0;
}

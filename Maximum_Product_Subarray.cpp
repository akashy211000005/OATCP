#include <bits/stdc++.h>
const int MOD = (int)1000000000 + 7;
using namespace std;
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    if(n==0)return 0;
    int max_product = nums[0];
    int left_product = 0, right_product = 0;

    for (int i = 0; i < n; i++) {
        left_product = ((left_product ? left_product : 1) * nums[i])%MOD;
        right_product = ((right_product ? right_product : 1) * nums[n - 1 - i])%MOD;
        max_product = max(max_product, max(left_product, right_product));
    }

    return max_product%MOD;
}
int solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int &val : v)
    {
        cin >> val;
    }
    cout<<maxProduct(v)<<endl;
    return 0;
}
int main()
{
    vector<string> input = {
        "Max_Prod_SubArray_input_1.txt",
        "Max_Prod_SubArray_input_2.txt",
        "Max_Prod_SubArray_input_3.txt"};
    vector<string> output = {
        "output1.txt",
        "output2.txt",
        "output3.txt"};
    for (int i = 0; i < 3; i++)
    {
        freopen(input[i].c_str(), "r", stdin);
        freopen(output[i].c_str(), "w", stdout);
        solve();
        fclose(stdin);
        fclose(stdout);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int solve()
{
    //input
    int cost_size;
    cin>>cost_size;
    vector<int> costs(cost_size);
    for(int &cost:costs)
    {
        cin>>cost;
    }
    int coins;
    cin>>coins;
    //solution
    sort(costs.begin(),costs.end());
    int ice_cream_bought=0;
    for(int i=0;i<cost_size;i++)
    {
        if(coins>=costs[i])
        {
            ice_cream_bought++;
            coins-=costs[i];
        }
    }
    cout<<ice_cream_bought<<endl;
    return 0;
}
int main()
{
    vector<string> input = {
        "Maximum_Ice_Bars_1.txt",
        "Maximum_Ice_Bars_2.txt",
        "Maximum_Ice_Bars_3.txt"};
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
#include <bits/stdc++.h>
const int MOD = (int)1000000000 + 7;
using namespace std;
int solve()
{
    int n, m,res=0;
    cin>>n;
    vector<int> b(n);
    for (int &val : b)
    {
        cin >> val;
    }
    cin>>m;
    vector<int> g(m);
    for (int &val : g)
    {
        cin >> val;
    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    int i = 0, j = 0;
    while (i < n and i < m)
    {
        if(abs(b[i]-g[j])<=1){
            i++;
            j++;
            res++; 
        }
        else if(b[i]<g[j]){
            i++;
        }else{
            j++;
        }
    }
    cout<<res<<endl;
    return 0;
}
int main()
{
    vector<string> input = {
        "BersuBall_input_1.txt",
        "BersuBall_input_2.txt",
        "BersuBall_input_3.txt"};
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

#include <bits/stdc++.h>
using namespace std;

int solve() {
    string num;
    int k;
    cin >> num >> k;
    vector<int> st;
    int i = 0;
    while (i < num.size()) {
        int digit = num[i] - '0';
        while (!st.empty() && st.back() > digit && k > 0) {
            st.pop_back();
            k--;
        }
        st.push_back(digit);
        i++;
    }
    while (k > 0 && !st.empty()) {
        st.pop_back();
        k--;
    }
    for (int i = 0; i < st.size(); i++) {
        cout << st[i];
    }
    cout << '\n';
    return 0;
}

int main()
{
    vector<string> input = {
        "Minimum_Integer_input_1.txt",
        "Minimum_Integer_input_2.txt"};
    vector<string> output = {
        "output1.txt",
        "output2.txt"};
    for (int i = 0; i < input.size(); i++)
    {
        freopen(input[i].c_str(), "r", stdin);
        freopen(output[i].c_str(), "w", stdout);
        solve();
        fclose(stdin);
        fclose(stdout);
    }
    return 0;
}
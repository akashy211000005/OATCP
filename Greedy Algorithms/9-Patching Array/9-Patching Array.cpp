#include <bits/stdc++.h>
using namespace std;
vector<long long> getInputVector() {
    vector<long long> nums;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }
    return nums;
}
int getTargetNumber() {
    int n;
    cin >> n;
    return n;
}
int solve() {
    vector<long long> nums=getInputVector();
    long long n=getTargetNumber();
    long long miss = 1;
    int added = 0;
    int i = 0;

    while (miss <= n) {
        if (i < nums.size() && nums[i] <= miss) {
            miss += nums[i++];
        } else {
            miss += miss;
            added++;
        }
    }
    cout<<added<<endl;
}

int main() {
    vector<string> input = {
        "Patching_Array_input_1.txt",
        "Patching_Array_input_2.txt"
    };
    vector<string> output = {
        "output1.txt",
        "output2.txt"
    };
    for (int i = 0; i < input.size(); i++) {
        freopen(input[i].c_str(), "r", stdin);
        freopen(output[i].c_str(), "w", stdout);
        solve();
        fclose(stdin);
        fclose(stdout);
    }
    return 0;
}
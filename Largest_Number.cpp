#include <bits/stdc++.h>
using namespace std;

int solve() {
    string largest_number;
    int n;
    cin >> n;
    vector<string> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end(), [](string &x, string &y) {
        return x + y > y + x;
    });
    for (auto number : numbers) {
        largest_number += number;
    }
    cout << largest_number << endl;
    return 0;
}

int main() {
    vector<string> input = {
        "Largest_Number_1.txt",
        "Largest_Number_2.txt"
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

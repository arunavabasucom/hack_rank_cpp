#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ones = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    if (n <= 9) {
        cout << ones[n];
    }
    else {
        cout << "Greater than 9";
    }

    return 0;
}
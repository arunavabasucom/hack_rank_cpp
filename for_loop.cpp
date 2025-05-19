#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> ones = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int a, b;
    cin >> a >> b;
    for (int i = a;i <= b; i++) {
        if (i > 9) {
            if (i % 2 == 0)
                cout << "even\n";
            else
                cout << "odd\n";
        }
        else {
            cout << ones[i] << endl;            
        }
    }
    return 0;
}
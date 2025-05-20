#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
int main() {
    int N, x, a, b;
    cin >> N;
    vector<int> A(N);
    REP(i, 0, N) {
        cin >> A[i];
    }
    cin >> x;
    cin >> a >> b;

    A.erase(A.begin() + x);             
    A.erase(A.begin() + (a - 1), A.begin() + (b - 1));  

    cout << A.size() << endl;
    for (int val : A) cout << val << " ";
    return 0;
}

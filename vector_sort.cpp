#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    sort(V.begin(), V.end());
    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }

    return 0;
}
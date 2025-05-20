#include <bits/stdc++.h>
using namespace std;
void swapstr(string* a, string* b) {
    swap(((*a)[0]), (*b)[0]);
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << a.size() << " "<< b.size() << endl;
    cout << a + b << endl;
    swapstr(&a, &b);
    cout << a << " " << b;
    return 0;
}
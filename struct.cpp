#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/

struct Student{
    string first_name;
    string last_name;
    int age;
    int standard;
};


int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
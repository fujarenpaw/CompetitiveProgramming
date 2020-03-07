#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[3];

void input() {
    for (int i = 0; i < 3; ++i) cin >> a[i];
}

int main() {
    input();
    sort(a, a+3, less<int>());

    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    return 0;
}
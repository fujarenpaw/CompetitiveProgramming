#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll a;
ll b;

void input() {
    cin >> a >> b;
}

int main() {
    input();
    cout << a /b << " " << a % b << " " << fixed << setprecision(5) << double(a) / double(b) << endl;
    return 0;
}
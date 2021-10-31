#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

int main() {
    double r;
    cin >> r;
    cout << fixed << setprecision(6) << M_PI * r * r << " " << fixed << setprecision(6) << 2 * M_PI * r << endl;
    return 0;
}
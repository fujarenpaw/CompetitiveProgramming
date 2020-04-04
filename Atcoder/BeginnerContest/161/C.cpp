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
    ll n ,k;
    cin >> n >> k;

    n = n % k;
    if(n > abs(n-k)){
        cout << abs(n-k) << endl;
    } else {
        cout << n << endl;
    }
    return 0;
}
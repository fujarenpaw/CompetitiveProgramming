#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl


int main() {
    ll n,m;
    cin >> n >> m;
    float a[n];
    float cnt = 0;
    bool flg = true;
    for(ll i=0;i < n;i++){
        cin >> a[i];
        cnt += a[i];
    }
    sort(a, a+n, greater<int>());

    for(ll i=0;i < m;i++){
        if(!(cnt <= 4 * m * a[i])){
            flg = false;
        }
    }
    Yes(flg);

    return 0;
}
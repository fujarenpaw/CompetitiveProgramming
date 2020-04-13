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
    ll n,cnt=0, i=1;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        if(i % 3 != 0 && i % 5 != 0){
            cnt += i;
        }
    }
    cout << cnt << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(a%b==0)return b;
    return gcd(a%b,b);
}

ll wrp(ll a, ll b, ll c){
    return gcd(gcd(a, b), c);
}

int main() {
    ll k, cnt = 0;
    cin >> k;

    for(ll i = 1; i <= k; i++){
        for(ll j = 1; j <= k; j++){
            for(ll l = 1; l <= k; l++){
                cnt += wrp(i, j, l);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}


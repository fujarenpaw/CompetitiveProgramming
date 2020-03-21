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
    ll N;
    cin >> N;
    ll a[N];
    for (int i = 0; i < N; ++i) cin >> a[i]; 

    for(ll i = N - 1; i >= 0; i--){
        cout << a[i];
        if(i != 0){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
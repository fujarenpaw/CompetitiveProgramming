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
    ll n, x;
    cin >> n;

    for(ll i = 1;i <= n;i++){
        x = i;
        if(x % 3 == 0 || x % 10 == 3){
            cout << " " << i;
        } else{
            while(x){
                x /= 10;
                if(x % 10 == 3){
                    cout << " " << i;
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    ll n, m, l;
    ll A[100][100] = {{}};
    ll B[100][100] = {{}};
    cin >> n >> m >> l;

    // input
    for(ll i = 0;i < n; i++){
        for(ll j = 0;j < m; j++){
            cin >> A[i][j];
        }
    }
    for(ll i = 0;i < m; i++){
        for(ll j = 0;j < l; j++){
            cin >> B[i][j];
        }
    }

    // output
    for(ll i = 0;i < n; i++){
        for(ll j = 0;j < l; j++){
            ll output = 0;
            for(ll k = 0;k < m; k++){
                output += A[i][k] * B[k][j];
            }

            if (j == 0)
            {
                cout << output;
            }
            else
            {
                cout << " " << output;
            }
        }
        cout << endl;
    }

    return 0;
}
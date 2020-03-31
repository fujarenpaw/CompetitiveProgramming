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
    int n, m, cnt;
    cin >> n >> m;
    int vec[n][m];
    int col[m];

    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            cin >> vec[i][j];
        }
    }
    for(int j = 0;j < m; j++){
        cin >> col[j];
    }

    for(int i = 0;i < n; i++){
        cnt = 0;
        for(int j = 0;j < m; j++){
            cnt += vec[i][j] * col[j];
        }
        cout << cnt << endl;
    }

    return 0;
}
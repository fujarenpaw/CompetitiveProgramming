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
    int buil[5][4][11] = {};
    int n,b,f,r,v;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;

        if(buil[b][f][r] + v > 9){
            buil[b][f][r] = 9;
        } else if(buil[b][f][r] + v < 0){
            buil[b][f][r] = 0;
        } else{
            buil[b][f][r] += v;
        }
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 4; j++){
            for(int k = 1; k < 11; k++){
                cout << " " << buil[i][j][k];
            }
            cout << endl;
        }
        if(i != 4){
            cout << "####################" << endl;

        }
    }

    return 0;
}
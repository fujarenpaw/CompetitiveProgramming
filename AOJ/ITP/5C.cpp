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
    ll h, w, cnt;
    string shape;
    while(1){
        
        cin >> h >> w;

        if(h == 0 && w == 0){
            break;
        }
        

        for(int i = 0;i < h;i++){
            shape = "";
            cnt = i % 2;
            for(int j = 0;j < w;j++){
                if(cnt % 2 == 0){
                    shape += "#";
                } else {
                    shape += ".";
                }

                cnt += 1;
            }
            cout << shape << endl;
        }
        cout << "" << endl;
    }

    return 0;
}
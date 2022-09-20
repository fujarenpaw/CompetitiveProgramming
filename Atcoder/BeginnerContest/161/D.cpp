#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main() {
    ll k, x, tmp, lp = 1, cnt = 0;
    string   s;
    
    bool flg;

    cin >> k;
    x = std::log10(k);

    while(1){
        flg = true;

        s = to_string(lp);
        if(lp >= 10){
            for(ll i = 0; i < x; i++){
                tmp = s.c_str()[i+1] - s.c_str()[i];
                if(abs(tmp) > 1){
                    flg = false;
                    break;
                }
            }
        }
        if(flg){
            cnt++;
        }
        if(cnt == k){
            break;
        }
        lp++;
    }
    cout << lp << endl;

    return 0;
}


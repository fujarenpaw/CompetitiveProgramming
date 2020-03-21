#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

enum suit
{
    SPADE = 0,
    HEART,
    CLUB,
    DIA,
    SUIT_NUM
};


int main() {
    // 0初期化
    int tramp[13][SUIT_NUM] = {};
    ll n;
    string s;
    string head = "SHCD";
    ll num;
    ll sn;
    
    cin >> n;
    for(int i = 1;n >= i; i++){
        cin >> s >> num;
        if(s == "S") sn=SPADE;
        if(s == "H") sn=HEART;
        if(s == "C") sn=CLUB;
        if(s == "D") sn=DIA;
        tramp[num - 1][sn] = 1;
    }

    for(int j = 0; SUIT_NUM > j; j++){
        for (int i = 0; 13 > i; i++){
            if(tramp[i][j] == 0){
                cout << head[j] << " " << i+1 << endl;
            }
        }
    }
    return 0;
}
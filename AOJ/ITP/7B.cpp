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
    ll n,x, cnt;
    while(1){
        cnt = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                for(int k = j+1; k <= n; k++)
                {
                    if(i + j + k == x)
                    {
                        // cout << i << " " << j << " " << k << endl;
                        cnt++;
                    }

                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}
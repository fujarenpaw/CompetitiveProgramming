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
    ll m,f,r,mfSum;
    while(1){
        cin >> m >> f >> r;
        if (m == -1 &&  f == -1 && r == -1){
            break;
        }
        mfSum = m + f;

        if (m == -1 || f == -1){
            cout << "F" << endl;     
        }
        else if(mfSum >= 80){
            cout << "A" << endl;            
        } else if (mfSum >= 65 && mfSum < 80){
            cout << "B" << endl;            
        } else if(mfSum >= 50 && mfSum < 65){
            cout << "C" << endl;            
        } else if(mfSum >= 30 && mfSum < 50){
            if(r >= 50){
                cout << "C" << endl;            
            } else {
                cout << "D" << endl;            
            }
        } else if(mfSum < 30){
            cout << "F" << endl;            
        }
    }

    return 0;
}
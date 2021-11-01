#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll r, c, rowSum;
    cin >> r >> c;
    ll ary[r+1][c+1];
    memset(ary, 0, sizeof(ary));

    for(ll i = 0; i < r; i++)
    {
        rowSum = 0;
        for(ll j = 0;j < c; j++)
        {
            cin >> ary[i][j];
            ary[r][j] += ary[i][j];
            rowSum += ary[i][j];
        }
        ary[i][c] = rowSum;
        ary[r][c] += rowSum;
    }

    for(ll i = 0; i <= r; i++)
    {
        for(ll j = 0;j <= c; j++)
        {
            if(j == 0)
            {
                cout << ary[i][j];
            }
            else
            {
                cout << " " << ary[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    string X;
    ll sum;
    cin >> X;
    while(X != "0")
    {
        sum = 0;
        
        for(int i = 0;i < X.size(); i++)
        {
            sum += (X[i] - '0');
        }
        cout << sum << endl;
        cin >> X;
    }

    return 0;
}
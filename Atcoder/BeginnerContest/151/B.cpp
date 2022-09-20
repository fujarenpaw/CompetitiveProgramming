#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int n,k,m;
    int resultedSum = 0,acheivedSum;

    cin >> n >> k >> m;
    vector<int> A(n);
    
    for(int i = 0;i<n-1; i++)
    {
        cin >> A[i];
        resultedSum += A[i];
    }

    acheivedSum = m * n;

    if(acheivedSum <= resultedSum)
    {
        cout << 0 << endl;
    }
    else if( (acheivedSum - resultedSum) <= k)
    {
        cout << acheivedSum - resultedSum << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
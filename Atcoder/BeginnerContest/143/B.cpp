#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> d(n);

    for(int i = 0;i<n; i++)
    {
        cin >> d[i];
    }

    for(int i = 0;i<n-1; i++)
    {
        for(int j = i+1;j<n; j++)
        {
            sum += d[i] * d[j];
        }
    }

    cout << sum << endl;

    return 0;
}
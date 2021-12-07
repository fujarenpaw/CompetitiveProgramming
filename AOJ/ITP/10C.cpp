#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    double sum, ave, var;
    cin >> n;
    vector<int> s(n);

    while(n != 0)
    {
        s.clear();
        sum = 0;
        var = 0;

        for(int i = 0;i < n; i++)
        {
            cin >> s[i];
            s.push_back(s[i]);
            sum += s[i];
        }

        ave = sum / n;

        for(int i = 0;i < n; i++)
        {
            var += ((s[i] - ave) * (s[i] - ave)) / n;
        }

        cout << fixed << setprecision(8); // 浮動小数点出力設定
        cout << sqrt(var) << endl;

        cin >> n;
    }

    return 0;
}
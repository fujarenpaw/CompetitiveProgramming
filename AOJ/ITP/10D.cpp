#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    double p1 = 0, p2 = 0, p3 = 0, pi = 0;

    cin >> n;
    vector<double> x(n);
    vector<double> y(n);

    for(int i = 0;i < n; i++){ cin >> x[i];}
    for(int i = 0;i < n; i++){ cin >> y[i];}

    for(int i = 0;i < n; i++)
    {
        p1 += abs(x[i] - y[i]);
        p2 += abs(x[i] - y[i]) * abs(x[i] - y[i]);
        p3 += abs(x[i] - y[i]) * abs(x[i] - y[i]) * abs(x[i] - y[i]);

        if (abs(x[i] - y[i]) > pi)
        {
            pi = abs(x[i] - y[i]);
        }
    }
    p2 = sqrt(p2);
    p3 = cbrt(p3);


    cout << fixed << setprecision(6); // 浮動小数点出力設定
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << pi << endl;

    return 0;
}
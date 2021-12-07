#include <iostream>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    double a, b, c, S;
    cin >> a >> b >> c;
    c = c * M_PI / 180;
    S = a * b / 2 * sin(c);

    cout << fixed << setprecision(8); // 浮動小数点出力設定
    cout << S << endl;
    cout << a + b + sqrt(a*a + b*b - 2 * a * b * cos(c)) << endl;
    cout << S * 2 / a << endl;

    return 0;
}
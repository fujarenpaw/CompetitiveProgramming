#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    double p1[2];
    double p2[2];
    double diff[2];

    cin >> p1[0] >> p1[1] >> p2[0] >> p2[1];
    diff[0] = p1[0] - p2[0];
    diff[1] = p1[1] - p2[1];

    cout << fixed << setprecision(8); // 浮動小数点出力設定
    cout << sqrt( diff[0] * diff[0] + diff[1] * diff[1]) << endl;    

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int H;
int W;

void input() {
    cin >> H;
    cin >> W;
}

int main() {
    input();

    cout << H*W << " " <<2 * (H + W) << endl;
    return 0;
}
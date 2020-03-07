#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int W;
int H;
int x;
int y;
int r;

void input() {
    cin >> W;
    cin >> H;
    cin >> x;
    cin >> y;
    cin >> r;
}

int main() {
    input();

    if((x + r) <= W && (x - r) >= 0 &&
    (y + r) <= H && (y - r) >= 0){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}
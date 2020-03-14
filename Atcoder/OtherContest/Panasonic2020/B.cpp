#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unsigned long long H;
unsigned long long W;

void input() {
    cin >> H;
    cin >> W;
}

int main() {
    input();

    if(H == 1 || W == 1){
        cout << 1 << endl;
    } else {
        cout << (H * W + 1) / 2 << endl;
    }
    return 0;
}
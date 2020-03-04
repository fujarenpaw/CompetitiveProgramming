#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string S;
int N;

void input() {
    cin >> N;
}

int main() {
    input();

    if (N % 2){
        cout << (N / 2) + 1 << endl;
    } else{
        cout << (N / 2) << endl;

    }
    return 0;
}
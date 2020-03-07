#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a;
int b;

void input() {
    cin >> a;
    cin >> b;
}

int main() {
    input();

    if (a == b){
        cout << "a == b" << endl;
    } else if(a < b){
        cout << "a < b" << endl;

    } else{
        cout << "a > b" << endl;

    }
    return 0;
}
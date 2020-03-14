#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long A;
long long B;
long long C;

void input() {
    cin >> A;
    cin >> B;
    cin >> C;
}

int main() {
    input();
    long long d = C - A- B;
    if(d > 0 && d * d> 4* A * B){
        cout << "Yes" << endl;
        
    }else{
        cout << "No" << endl;

    }

    return 0;
}
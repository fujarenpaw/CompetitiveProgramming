#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int A500;
int B100;
int C50;
int X;

void input() {
    cin >> A500;
    cin >> B100;
    cin >> C50;
    cin >> X;
}

int main() {
    input();
    int cnt = 0;

    for(int Ai=0;Ai <= A500;Ai++){
        for(int Bi=0;Bi <= B100;Bi++){
            for(int Ci=0;Ci <= C50;Ci++){
                if(Ai * 500 + Bi * 100 + Ci * 50 == X){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int A[200];

void input() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];
}

int main() {
    input();
    int cnt = 0;
    bool flg = 1;
    
    while(flg){
        for (int i = 0;i < N;i++){
            if (A[i] % 2 == 0){
                A[i] = A[i] / 2;
            } else {
                flg = 0;
                break;
            }
        }
        if (flg){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
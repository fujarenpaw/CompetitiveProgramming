#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int A[3][3];

int main() {
    int N;
    int b;
    int flg = 0;
    for (int i = 0; i < 3; ++i) cin >> A[i][0] >> A[i][1] >> A[i][2];
    cin >> N;
    for(int i = 0;i < N; i++){
        cin >> b;
        for(int j = 0;j < N; j++){
            for(int k = 0;k < N; k++){
                if(b == A[j][k]){
                    A[j][k] = 0;
                }
            }
        }
    }

    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){
            if (A[i][j] == 0 && A[i][j] == 0 && A[i][j] == 0 ){
                flg = 1;
            }
        }
        if (A[i][i] == 0 && A[i][i] == 0 && A[i][i] == 0 ){
            flg = 1;
        }
    }

    if (flg){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}
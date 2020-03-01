#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int D[100];

void input() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> D[i];
}

int main() {
    input();
    int cnt = 0;
    int beforeVal = 0;
    sort(D, D + N, greater<int>());  // a[0:N] を大きい順にソート

    for(int i = 0; i < N; i++){
        if (beforeVal != D[i]){
            cnt++;
        }
        beforeVal = D[i];
    }
    cout << cnt << endl;
    return 0;
}
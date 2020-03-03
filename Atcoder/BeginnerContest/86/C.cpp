#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int t[100000], x[100000], y[100000];

void input() {
    cin >> N;
    
    for (int i = 0; i < N; ++i) cin >> t[i] >> x[i] >> y[i];
}

int main() {
    input();
    int x_pos = 0;
    int y_pos = 0;
    int dist = 0;
    int flg = 1;
    int bt = 0;

    for(int i = 0; i < N;i++){
        dist = abs(x_pos - x[i]) + abs(y_pos - y[i]);
        if(dist <= (t[i] - bt) && (dist % 2) == ((t[i] - bt) % 2)){
            x_pos = x[i];
            y_pos = y[i];
        } else {
            flg = 0;
            break;
        }
        bt = t[i];
    }
    if(flg){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a;
int b;
int c;

void input() {
    cin >> a;
    cin >> b;
    cin >> c;
}

int main() {
    input();
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(c % i == 0){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
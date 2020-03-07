#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int num;
    int cnt = 1;
    while(1){
        cin >> num;
        if (num == 0){
            break;
        }
        cout << "Case " << cnt << ":" << " " << num << endl;
        cnt++;
    }

    return 0;
}
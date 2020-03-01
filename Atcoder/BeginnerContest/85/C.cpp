#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int Y;

void input() {
    cin >> N;
    cin >> Y;
}

int main() {
    input();
    int n1000 = 0;
    int n5000 = 0;
    int n10000 = 0;
    int diff = 0;

    // 一番少ない枚数で算出
    n10000 = Y / 10000;
    n5000 = (Y - n10000 * 10000) / 5000;
    n1000 = (Y - n10000 * 10000 - n5000 * 5000) / 1000;
    
    if((n10000 + n5000 + n1000) == N){
        // 何もしない
    } else if ((n10000 + n5000 + n1000) > N){
        n10000 = -1;
        n5000 = -1;
        n1000 = -1;
    } else{
        diff = N - (n10000 + n5000 + n1000);

        while(1){
            // 最優先 5000 -> 1000 * 5
            if (n5000 > 0 && diff >= 4){
                n5000--;
                n1000 += 5;
            } else if (n10000 > 0 && diff >= 1){
                n10000--;
                n5000 += 2;
            } else{
                n10000 = -1;
                n5000 = -1;
                n1000 = -1;
                break;
            }
                        
            diff = N - (n10000 + n5000 + n1000);
            if (diff == 0 || diff < 0){
                break;
            }
        }
    }

    cout << n10000 << " " << n5000 << " " << n1000 << endl;
    return 0;
}
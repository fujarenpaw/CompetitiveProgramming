#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,s,c;
    int num = 0;
    string sc;
    string zero = "0";
    cin >> N >> M;
    std::string str(N, '0');
    for(int i = 0;i < M;i++){
        cin >> s >> c;
        sc = to_string(c);
        if (N >= s){
            if(str[N - s] == sc.c_str || str[N - s] == zero.c_str){
                str[N - s] = sc.c_str;
            } else {
                num = -1;
                break;
            }
        }
        num = stoi(str);
    }

    cout << num << endl;
    return 0;
}
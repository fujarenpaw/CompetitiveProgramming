#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

string op;
ll a;
ll b;


int main() {
    while(1){
        cin >> a >> op >> b;
        if(op == "+"){
            cout << a + b << endl;
        } else if(op == "-"){
            cout << a - b << endl;
        } else if(op == "/"){
            cout << a / b << endl;
        } else if(op == "*") {
            cout << a * b << endl;
        } else if(op == "?"){
            break;
        }
    }
    return 0;
}
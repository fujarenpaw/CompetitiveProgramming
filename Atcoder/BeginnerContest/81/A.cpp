#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string S;

void input() {
    cin >> S;
}

int main() {
    input();
    cout << count(cbegin(S), cend(S), '1') << "\n"; 
    return 0;
}
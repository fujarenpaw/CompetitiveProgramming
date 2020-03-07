#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int S;

void input() {
    cin >> S;
}

int main() {
    input();
    int hour = S / 3600;
    int min = (S - 3600 * hour) / 60;
    int sec = S - 3600 * hour - 60 * min;
    

    cout << hour << ":"<< min << ":" << sec << endl;
    return 0;
}
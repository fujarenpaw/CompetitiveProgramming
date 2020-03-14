#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int ary[32] = {} ;
int N;
int x[] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};

void input() {
    cin >> N;
}

int main() {
    input();

    cout << x[N-1] << endl;
    return 0;
}
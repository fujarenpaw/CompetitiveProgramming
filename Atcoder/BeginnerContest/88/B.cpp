#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(100);

void input() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];
}

int main() {
    input();
    int alice = 0;
    int bob = 0;
    int max;
    size_t index;
    std::vector<int>::iterator iter;

    for(int i = 0;i < N; i++){
        iter = max_element(A.begin(), A.end());
        max = *max_element(A.begin(), A.end());
        index = distance(A.begin(), iter);
        A.erase(A.begin() + index);

        if(i % 2 == 0){
            alice += max;
        } else{
            bob += max;
        }
    }
    cout << alice - bob << endl;
    return 0;
}
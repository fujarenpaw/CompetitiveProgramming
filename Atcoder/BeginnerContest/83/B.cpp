#include <iostream>
#include <sstream>
using namespace std;

int N;
int A;
int B;

void input() {
    cin >> N;
    cin >> A;
    cin >> B;
}

int sum(string str){
    int n = 0;
    for (char ch : str) {
        n += atoi(string(1,ch).c_str());
    }
    return n;
}

int main() {
    input();
    int num = 0;
    for(int i = A; i <= N; i++){
        if(sum(to_string(i)) <= B && sum(to_string(i)) >= A){
            num += i;
        }
    }
    cout << num << endl;

    return 0;
}


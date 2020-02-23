#include <iostream>
using namespace std;

int A;
int B;

void input() {
    cin >> A;
    cin >> B;
}

int main() {
    input();

    if((A*B % 2) == 0){
        printf("Even\n");
        
    } else{
        printf("Odd\n");

    }

    return 0;
}
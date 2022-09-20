#include <iostream>
using namespace std;


int main() {
    int a,b;
    cin >> a >> b;

    if(a > b)
    {
        cout << string(a, '0' + b) << endl;
    }
    else
    {
        cout << string(b, '0' + a) << endl;
    }
    return 0;
}
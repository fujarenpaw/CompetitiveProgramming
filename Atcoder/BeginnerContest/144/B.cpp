#include <iostream>
using namespace std;


int main() {
    int n;
    bool flg = false;
    cin >> n;

    for(int i = 1;i<=9; i++)
    {
        if(n % i == 0 && ( (n / i >= 1)  && (n / i <= 9)))
        {
            flg = true;
            break;
        }
    }

    if(flg)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
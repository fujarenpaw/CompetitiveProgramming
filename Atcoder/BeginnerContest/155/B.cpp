#include <iostream>
using namespace std;


int main() {
    int n, ai;
    bool flag = true;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> ai;

        if (ai % 2 != 0 || (ai % 2 == 0  && ( ai % 3 == 0 || ai % 5 == 0)))
        {
            // None
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {   
        cout << "APPROVED" << endl;
    }
    else
    {
        cout << "DENIED" << endl;
    }

    return 0;
}
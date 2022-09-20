#include <iostream>
using namespace std;


int main() {
    int n;
    string s;
    string result = "";

    cin >> n;
    cin >> s;

    for(int i = 0;i<s.length(); i++)
    {

        if((s[i] + n) > 'Z') // 繰り上がりの場合
        {
            result += (s[i] + n - 26);
        }
        else
        {
            result += (s[i] + n);
        }
    }

    cout << result << endl;

    return 0;
}
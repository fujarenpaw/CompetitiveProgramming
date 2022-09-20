#include <iostream>
using namespace std;


int main() {
    int n;
    string s,t;
    string result = "";

    cin >> n;
    cin >> s >> t;

    for(int i = 0; i<n;i++)
    {
        result += s[i];
        result += t[i];
    }

    cout << result << endl;

    return 0;
}
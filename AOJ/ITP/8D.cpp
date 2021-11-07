#include <bits/stdc++.h>
using namespace std;
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl


int main() {
    string s, p;
    bool flg = false;
    cin >> s;
    cin >> p;

    for (int i = 0; i < s.size(); i++)
    {
        string resize = s.substr(i, s.size() - i) + s.substr(0, i);
        if(resize.find(p) != string::npos)
        {
            flg = true;
            break;
        }
    }

    Yes(flg);

    return 0;
}

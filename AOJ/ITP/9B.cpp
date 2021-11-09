#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    string loop;
    int h;

    cin >> str;
    while(str != "-")
    {
        cin >> loop;
        for(int i = 0; i < atoi(loop.c_str());i++)
        {
            cin >> h;   
            str = str.substr(h, str.length() - h) + str.substr(0, h);
        }
        cout << str << endl;

        cin >> str;
    }

    return 0;
}
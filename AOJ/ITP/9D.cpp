#include <bits/stdc++.h>
using namespace std;


int main() {
    string str, command, replaceWord;
    int q, a, b;

    cin >> str;
    cin >> q;
    
    for(int i = 0;i < q; i++){
        cin >> command >> a >> b;

        if(command == "replace")
        {
            cin >> replaceWord;
            str.replace( a, b - a + 1, replaceWord);
        }
        else if(command == "reverse")
        {
            reverse( str.begin() + a, str.begin() + b + 1);
        }
        else if(command == "print")
        {
            cout << str.substr(a, b - a + 1) << endl;
        }
    }

    return 0;
}
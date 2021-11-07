#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    getline(cin,str);

    for(int i = 0;i <str.size();i++)
    {
        // 小文字        
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += 'A' - 'a';
        }
        // 大文字
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
    }
    cout << str << endl;

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    string str;
    int cnt[26] = {};

    while(getline(cin, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                cnt[str[i] - 'a']++;
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                cnt[str[i] - 'A']++;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        cout << (char)('a'+i) << " : " << cnt[i] << endl;
    }

    return 0;
}
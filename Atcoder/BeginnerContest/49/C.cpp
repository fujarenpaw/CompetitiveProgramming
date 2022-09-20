#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    bool flag = true;
    vector<string> words{"dream", "dreamer", "erase", "eraser"};
    cin >> s;

    while(1)
    {
       bool findable = false;
       for (const auto& e : words) {
           int len = e.length();

            if(len > s.length())
            {
                continue;
            }

            // 後ろから一致判定
           if(e == s.substr(s.length() - len, len))
           {
               // 一致する場合は消去
               s.erase(s.end() - len, s.end());
               findable = true;
               break;
           }
        }

        // 一致なし
        if(findable == false)
        {
            flag = false;
            break;
        }

        // 最後まで一致
        if(s.length() == 0)
        {
            break;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
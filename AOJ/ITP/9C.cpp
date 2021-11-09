#include <bits/stdc++.h>
using namespace std;


int main() {
    int num;
    int taro_point = 0;
    int hana_point = 0;
    string taro,hana;
    
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> taro >> hana;

        if(taro == hana)
        {
            taro_point += 1;
            hana_point += 1;
        }
        // 太郎勝利
        else if(taro > hana)
        {
            taro_point += 3;
        }
        // 花子勝利
        else
        {
            hana_point += 3;
        }
    }

    cout << taro_point << " " << hana_point << endl;

    return 0;
}
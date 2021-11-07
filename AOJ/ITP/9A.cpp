#include <bits/stdc++.h>
using namespace std;


int main() {
    string W, line;
    cin >> W;
    int cnt = 0;

    cin >> line;
    while(line != "END_OF_TEXT")
    {
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        if(line == W)
        {
            cnt++;
        }
        cin >> line;
    }

    cout << cnt << endl;

    return 0;
}
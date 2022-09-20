#include <iostream>
using namespace std;


int main() {
    int n;
    int inclimentFlag = 0, counter = 0;
    string s;
    string checkedWord = "ABC";

    cin >> n;
    cin >> s;

    for(int i = 0;i<s.length(); i++)
    {
        if(s[i] == checkedWord[inclimentFlag])
        {
            inclimentFlag++;
        }
        else
        {
            if(s[i] == checkedWord[0])
            {
                inclimentFlag = 1;
            }
            else
            {
                inclimentFlag = 0;
            }
        }

        if(inclimentFlag == 3)
        {
            counter++;
            inclimentFlag = 0;
        }

    }

    cout << counter << endl;

    return 0;
}
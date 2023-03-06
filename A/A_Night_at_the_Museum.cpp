#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{

    // int c , v;
    // char s[1000];
    // cin >> s;
    // for (int i = 0; i < strlen(s); i++)
    // {
    //  int v = s[i] - 73;

    // }

    // cout << v;

    string s;
    cin >> s;
    int smoves = 0;
    int strt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97;
        int walk = abs(strt - index);
        if (walk < 13)
        {
            smoves += walk;
        }
        else
        {
            smoves += 26 - walk;
        }
        strt = index;
    }

    cout << smoves;

    return 0;
}
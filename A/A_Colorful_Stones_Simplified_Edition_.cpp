#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[1000000];
    char s2[1000000];
    cin >> s1;
    cin >> s2;
    int c = 0;
    for (int i = 0; i < strlen(s2); i++)
    {
        if (s2[i] == s1[c])
        {
            c++;
        }
    }
    cout << c+1;

    return 0;
}
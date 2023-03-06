// Word
#include <iostream>
using namespace std;
int main()
{
    string s;
    int C = 0;
    int c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            C++;
        else
            c++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (c > C || C == c)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    }
    cout << s;
    return 0;
}
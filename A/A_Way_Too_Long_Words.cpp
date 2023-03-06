#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string str;
    char f, l;
    for (int i = 0; i < n; i++)
    {
        cin >> st   r;

        if (str.length() > 10)
        {
            f = str[0];
            l = str[str.length() - 1];
            cout << f << str.length() - 2 << l << endl;
        }

        else
            cout << str << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, _a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '+')
        {
            _a.push_back(a[i]);
        }
    }
    sort(_a.begin(), _a.end());
    cout << _a[0];
    for (int i = 1; i < _a.size(); i++)
    {
        cout<< '+'<< _a[i];
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int t[10000];
    while (i < n)
    {
        cin >> t[i];

        i++;
    }
    sort(t, t+n);
     for ( i; i < n; i++)
    {
        cout <<t[i];
    }

    return 0;
}
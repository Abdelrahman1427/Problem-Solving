// Sereja_and_Dima
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int s = 0;
    int d = 0;

    int n;
    int c[n];
    bool last = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int f = 0;
    int e = n - 1;

    while (c[f] <= c[e])
    {
        if (last)
        {
            s += c[e];
            // last = false;
        }
        else
        {
            d += c[e];
            // last = true;
        }
        e--;
    }
    while (c[f] > c[e])
    {
        if (last)
        {
            s += c[f];
            // last = false;
        }
        else
        {
            d += c[f];
            // last = true;
        }
        f++;
    }

    cout << s << ' ' << d;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, d;
    int n;
    int c = 0;
    char s;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> d;
        if (s == '-' && d < x)
            x -= d;
        else if (s == '-' && d > x)
            c++;
        else
        {
            x += d;
        }
    }

    cout << x << " " << c;

    return 0;
}
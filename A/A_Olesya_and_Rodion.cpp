#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    long long random;
    cin >> n >> t;
    long long c = 1;
    for (int i = 0; i < n; i++)
    {

        random = c + (rand() % (c + 1));
        while (i == n - 1 && random % t != 0)
        {
            random = c + (rand() % (c + 1));
            if (c < t)
                break;
        }
        c *= 10;
    }
    if (c < t)
        cout << "-1";
    else
        cout << random;

    return 0;
}
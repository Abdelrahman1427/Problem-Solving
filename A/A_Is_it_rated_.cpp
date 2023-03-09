#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    bool rated = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] != b[i])
        {
            rated = true;
        }
    }

    if (rated)
    {
        cout << "rated\n";
    }
    else
    {
        bool unrated = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                unrated = true;
                break;
            }
        }
        if (unrated)
        {
            cout << "unrated\n";
        }
        else
        {
            cout << "maybe\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k, x, y;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        --x;                      // to access first element in array correct
        if (x != 0)               // to check it is not most left
            a[x - 1] += y - 1;    // left + my pos-1
        if (x != n - 1)           // to check it is not most right
            a[x + 1] += a[x] - y; // right + total - my pos

        a[x] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
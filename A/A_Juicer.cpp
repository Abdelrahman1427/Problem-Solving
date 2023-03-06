#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int a;
    int sum = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > b)
            continue;
        else
            sum += a;
        if (sum > d)
        {
            ++c;
            sum = 0;
        }
    }
    cout << c;
    return 0;
}
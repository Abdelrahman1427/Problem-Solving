#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[n];
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    int avg = sum / 2;
    int c = 0;
    int hamada = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        hamada += a[i];
        c++;
        if (hamada > avg)
            break;
    }
    cout << c;

    return 0;
}
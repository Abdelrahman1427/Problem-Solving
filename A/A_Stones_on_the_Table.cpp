// Sereja_and_Dima
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int i = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            c++;
    }
    cout << c;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[10] = {'C', 'M', 'Y', 'W', 'G', 'B'};
    int a, b;
    cin >> a >> b;

    char cc[a][b];
    bool flage = true;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> cc[i][j];
            if (cc[i][j] == 'C' || cc[i][j] == 'M' || cc[i][j] == 'Y')
                flage = false;
        }
    }

    if (flage)
        cout << "Black&White";
    else

        cout << "#Color";
    return 0;
}
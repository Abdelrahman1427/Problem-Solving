#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[6] = {'C', 'M', 'Y', 'W', 'G', 'B'};
    int a, b;
    cin >> a >> b;

    char cc[a][b];
    bool flage = true;
    int color = 0, bw = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> cc[i][j];
            if (cc[i][j] == 'C' || cc[i][j] == 'M' || cc[i][j] == 'Y')
            {
                color++;
            }
        }
    }

    if (color >= 1)  // elmshkla kant hana 
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }

    return 0;
}

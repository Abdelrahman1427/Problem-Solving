// Team
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3);
                break;
            }
        }
    }

    return 0;
}
// Magnets
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    int P[l];
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        cin >> P[i];
        if (l == 1)
        {
            c++;
        }
        else if (P[i - 1] != P[i])
        {
            c++;
        }
    }
    cout << c;
    return 0;
}

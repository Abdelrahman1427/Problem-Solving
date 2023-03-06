// Bear and Big Brother
#include <iostream>
using namespace std;
int main()
{
    int L, B;
    int c = 0;
    cin >> L >> B;

    if (L == B)
    {
        c++;
        cout << c;
    }
    else if (L < B)
    {
        while (L <= B)
        {
            c++;
            B = B * 2;
            L = L * 3;
        }
        cout << c;
    }

    return 0;
}
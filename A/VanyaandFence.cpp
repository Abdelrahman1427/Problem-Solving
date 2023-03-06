#include <iostream>
using namespace std;
int main()
{
    int n, h;
    int c = 0;
    int a;

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= h)
            c++;
        else
            c = c + 2;
    }
    cout << c;
    return 0;
}
// A. Anton and Danik
#include <iostream>
using namespace std;
int main()
{
    int n;
    string str;

    cin >> n;
    cin >> str;
    int C = 0;
    int D = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            C++;
        else
            D++;
    }

    if (C == D)
        cout << "Friendship";
    else if (C < D)
        cout << "Danik";
    else
        cout << "Anton";

    return 0;
}
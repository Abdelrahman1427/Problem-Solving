#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string sec;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int f = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[0])
            f++;
        else
            {s++;
            sec = arr[i];
            }
    }

    if (f > s)
        cout << arr[0] << endl;
    else
        cout << sec << endl;

    return 0;
}

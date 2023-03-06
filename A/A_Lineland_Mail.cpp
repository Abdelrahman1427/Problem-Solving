#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long mini ,maxi ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (!i)
        {
            mini = abs(arr[i] - arr[i + 1]);
            maxi = abs(arr[i] - arr[n - 1]);
        }
        else if (i == n - 1)
        {
            maxi = abs(arr[i] - arr[0]);
            mini = abs(arr[i] - arr[i - 1]);
        }
        else
        {
            mini = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
            maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        }   
        cout << mini << " " << maxi << endl;
    }
    return 0;
}
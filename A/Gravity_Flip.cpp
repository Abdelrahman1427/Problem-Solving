// Gravity Flip
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int unmBox[n];

    for (int i = 0; i < n; i++)
    {
        cin >> unmBox[i];
    }
    int x = sizeof(unmBox) / sizeof(unmBox[0]); // (1)

    sort(unmBox, unmBox + x); // (2)

    for (int i = 0; i < n; ++i)
        cout << unmBox[i] << " ";

    return 0;
}
/* 1- sizeof(unmBox) is the size of the whole array (size as in how much space it takes in memory)
sizeof(arr[0]) is the size of a single element.*/

/* 2- parameters, the beginning of the array and
 the length n upto which we want the array to
 be sorted*/
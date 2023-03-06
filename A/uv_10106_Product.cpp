#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    while (cin >> s1)
    {
        cin >> s2;

        // Reverse the strings to simplify the multiplication
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        // Initialize an array to store the multiplication result
        int a[600] = {}; // using {} to initialize the array with zeros

        // Multiply the numbers digit by digit
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {
                a[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        // Perform the carry operation and output the result
        for (int i = 0; i < 600 - 1; i++)
        {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        int i = 600 - 1;
        while (i > 0 && a[i] == 0)
            i--;
        for (; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }

    return 0;
}

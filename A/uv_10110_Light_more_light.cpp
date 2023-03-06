#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Dynamically allocate a new array of n bulbs
    long long *bulb = new long long[n];
    bool *sw = new bool[n]; // Use n instead of 10^7

    // Read the values of the bulbs
    for (int i = 0; i < n; i++)
    {
        cin >> bulb[i];
    }

    // Iterate through all the switches
    for (int i = 1; i <= n; i++)
    {
        fill(sw, sw + n, false); // Use fill to initialize sw to false

        // Toggle the bulbs that are divisible by i
        for (int j = i - 1; j < n; j += i)
        {
            sw[j] = !sw[j];
        }
    }

    // Check the final state of the last bulb
    for (int i = 0; i < n; i++)
    {
        if (sw[n - 1] == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    // Deallocate the dynamically allocated arrays
    delete[] bulb;
    delete[] sw;

    return 0;
}

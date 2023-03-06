// Boy OR Girl
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    string s1;
    int dist;
    int c;
    cin >> s1;
    for (int i = 1; i <= s1.size(); i++)
    {
        for (int j = 1; j <= s1.size(); j++)
        {
            if (s1[i] == s1[j + i])
            {
                dist = dist - 1;
            }
        }
    }
    if (dist % 2 != 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}

// sort ( start,start + n  )
/* 1- sizeof(unmBox) is the size of the whole array (size as in how much space it takes in memory)
sizeof(arr[0]) is the size of a single element. n = sizeof(unmBox)/sizeof(arr[0]) */

/* 2- parameters, the beginning of the array and
 the length n upto which we want the array to
 be sorted*/
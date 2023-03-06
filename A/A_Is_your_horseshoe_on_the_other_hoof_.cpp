#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int s1, s2, s3, s4;
    // int c = 0;
    // cin >> s1 >> s2 >> s3 >> s4;
    // if (s1 == s2 || s1 == s3 || s1 == s4)
    //     c++;
    // if (s2 == s3 || s2 == s4)
    //     c++;
    // if (s3 == s4)
    //     c++;

    // cout << c;

    set<int> s;
    int k, n = 4;
    while (n--)
    {
        cin >> k;
        s.insert(k);
    }
    cout << 4 - s.size();
    return 0;
}
//  Police Recruits
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n, num;
    int p = 0;
    int cr = 0;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cin >> num;
        if (num > 0)
            p+=num;
        else{
            if(p>0)
                p--;
            else
                cr++;
            }
    }
    cout << cr;
    return 0;
}

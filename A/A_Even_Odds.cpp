#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, p;
    cin >> n >> p;
    int c=1;
    int j=0 , z=1;
    int temp[n] , tempp[n];
    for (int i = 1; i <= n; i++)
    {
        if(c % 2 !=0)
        {temp[j] = c++;j++;}
        else
        {tempp[z] =c++; z++;}

    }
    if(n%2==0&& p== n/2)
        cout <<(n-1);
    else if(p<j)
        cout << temp[p-1];
    else
        cout <<tempp[p-j];
    return 0;
}
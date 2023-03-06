#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int y, w;
    int z;
    string die[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin >> y >> w;
    // if(y>w)
    //     z= (6-y);
    // else if (w>y)
    //     z= (6-y);
    // else if (y==0 || z==0)
    //     z=0;
    z = max(y, w);
    cout << die[6 - z];
    return 0;
}
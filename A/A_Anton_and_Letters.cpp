#include <bits/stdc++.h>
using namespace std;

int main()
{
string a; 
getline(cin,a);
sort(a.begin(),a.end()); 
int sum=0;
for (int i = 0; i < a.size(); i++)
{
    if(a[i]>='a'&&a[i]<='z'&& a[i]!=a[i+1])
    sum++;
}
cout <<sum;
return 0;
}
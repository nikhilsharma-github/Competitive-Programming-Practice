#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a[7]={1,2,3,4,5,6,7};
int t[2];
int d=2;
int n=7;
int i,j;
for(int i=0;i<d;i++)
t[i]=a[i];

for(int i=0;i<7-d;i++)
 
a[i]=a[i+d];

for(i=0;i<d;i++)
a[i+n-d]=t[i];

for(int i=0;i<n;i++)
cout<<a[i]<<" ";

return 0;
}
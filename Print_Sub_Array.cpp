#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,x,y;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cin>>x>>y;
for(int i=x-1;i<=y-1;i++)
{
cout<<a[i]<<" ";
}

return 0;
}
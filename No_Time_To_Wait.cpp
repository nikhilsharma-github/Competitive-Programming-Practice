#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,h,x,t,i;
cin>>n>>h>>x;
vector<int> v;
for(i=0;i<n;i++)
{
    cin>>t;
    v.push_back(t);
}
for(i=0;i<n;i++)
{
    if(x+v[i]>=h)
    {
    cout<<"YES"<<endl;
     break;
    }
}
if(i==n)
cout<<"NO"<<endl;
return 0;
}
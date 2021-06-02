#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// int n,d,r=0,k;
int n,d,ms=0,cs=0;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<d;i++)
  ms=ms+a[i];

cs=ms;
  for(int i=d;i<n;i++)
  {
      cs=cs+a[i]-a[i-d];
           ms=max(cs,ms);
      
           
  }

//   cout<<ms<<endl;
return 0;
}
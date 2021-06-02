#include <bits/stdc++.h>
using namespace std;
// int a[10]={5,4,-9,6,8,12,3,-11,5,2};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
 int a[n];
  int msf=INT_MIN,meh=0;

    for(int i=0;i<n;i++)
  cin>>a[i];

  for(int i=0;i<n;i++)
  {
    meh=meh+a[i];
   if(meh<a[i])
      meh=a[i];

    if(meh>msf)
    msf=meh;
  }

  cout<<msf<<endl;

return 0;
}
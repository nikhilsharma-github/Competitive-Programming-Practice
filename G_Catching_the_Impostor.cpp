#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n,k,c=0,t;
 cin>>n>>k;
  
  int r[n+1]={0};
 for(int i=0;i<k;i++)
 {
     cin>>t;
     r[t]++;
 }
 for(int i=1;i<=n;i++)
 {
    // cout<<i<<" "<<r[i]<<endl;
    if(r[i]==0)
    {
    //  cout<<i<<" occured "<<r[i]<<" times "<<endl;
      c++; 
    }
 }

 if(c==1)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;

return 0;
}
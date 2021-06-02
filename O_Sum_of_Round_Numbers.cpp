#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
cin >> test;
while (test--)
{
int n,t=1,d,val=0,c=0;
vector<int> v;
cin >> n;
 val=0,t=1,d=0;
 
//  if(n>=1&&n<=9)
//  {
//  cout<<"1"<<endl<<"1"<<endl;
//  continue;
//  }
//  else
//  {
      while(n){
        d=n%10;
        // if(d==0)
        // {
        //     val=val+t*1;
        // }
        if(d!=0)
        { 
            val=0;
            val=val+(d*t);
            v.push_back(val);
            // cout<<val<<" ";
            c++;
        }
        t=t*10;
        n=n/10;
      }
    //   cout<<endl;
        // cout<<"no of round nos used above : "<<c<<endl;
//  }
 cout<<c<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
 
}
return 0;
}
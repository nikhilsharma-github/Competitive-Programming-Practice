#include <bits/stdc++.h>
using namespace std;

// long long fact(long long n)
// {

//     if(n==0||n==1)
//     {
//         return 1;
//     }
//     if(n==2)
//     return 2;

//     long long ans=1;
//     for(long i=1;i<=n;i++)
//     ans=ans*i;
//      cout<<" factorial from function is : "<<ans<<endl;
//     return ans;
// }
int main()
{
    // char ch='b';
    // int r=ch;
    // cout<<r<<endl;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
cin >> test;
while (test--)
{
long long x,y;
   cin>>x>>y;
   long long n=max(x,y);
   long long r=min(x,y);

   if(n==r)
    {
        cout<<"1"<<endl;
        continue;
    }
     
   unsigned long long ans=0;
    long long k=n-r+1;

    //    for(long long r=k;r>=1;r--)
    //    ans=ans+r;
    // ans=(k*(k+1))/2;

        ans=k+n-r;
    // ans=fact(n)/(fact(r)*fact(n-r));


    cout<<ans<<endl;
}
return 0;
}
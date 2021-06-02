#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long test;
cin >> test;
while (test--)
{
    // cout<<"TESTCASE: "<<test+1<<endl;
long long n;
cin >> n;
// cout<<"INPUT: "<<n<<endl<<endl;

     
     for(int i=1;i<=n;i++){

         for(int j=1;j<=n*2;j++){

             if((j<=i)||(j>=n*2+1-i))
             cout<<"*";
             else
             cout<<"#";
         }
         cout<<endl;
     }
     cout<<endl;
   
}
return 0;
}
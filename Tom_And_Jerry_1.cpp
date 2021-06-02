#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"TESTCASE : "<<test+1<<endl;
      long t1,t2,j1,j2,s,d1,d2;
      cin>>t1>>t2>>j1>>j2>>s;
          d1=(abs)(j1-t1);
          d2=(abs)(j2-t2);
        //   cout<<"TOM : "<<t1<<" , "<<t2<<endl;
        //   cout<<"JERRY : "<<j1<<" , "<<j2<<endl;
        //   cout<<"given steps count :"<<s<<endl;
        //   cout<<"accurate steps count : "<<d1+d2<<endl;

         if(d1+d2==s){
         cout<<"YES"<<endl;
            // cout<<"Steps are equal as expected"<<endl;
         }
         else if(abs(s-(d1+d2))%2==0)
         {
         cout<<"YES"<<endl;
            //  cout<<"steps will be equal after jumping up and down on any neighbouring cell "<<endl;
         }
         else if(abs(s-(d1+d2))%2!=0)
         {
         cout<<"NO"<<endl;
            //  cout<<"steps will not be equal after jumping up and down on any neighbouring cell "<<endl;
         }

    }
    return 0;
}
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
        long double u, v, a, s,fv=0,n=-1;
        cin >> u >> v >> a >> s;
         
        //  cout<<"initial velocity u : "<<u<<endl;
        //  cout<<"required velocity v : "<<v<<endl;
        //  cout<<"de acceleration  : "<<a<<endl;
        //  cout<<"distance : "<<s<<endl;

           if(v==u&&(a<=1))
           {
               cout<<"YES"<<endl;
               continue;
           }
           
        else if( ((u*u)+2*a*n*s)>=0)
        {
            // cout<<"u square "<<u*u<<endl;
            // cout<<" 2as :"<<2*a*n*s<<endl;
             
          fv=(u*u)+2*(a)*n*s;
        //   cout<<"fv value before sqrt : "<<fv<<endl;
          fv=sqrt(fv);
        //   cout<<"final velocity at turn : "<<fv<<endl;
          if(fv>v)
          cout<<"NO"<<endl;
          else
          cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;

    }
    return 0;
}
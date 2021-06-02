#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   short int test;
    cin >> test;
    while (test--)
    {
        unsigned long long  p, d,sum=0;
        short int n,c=0;
        cin >> n >> p >> d;
        long long a[n];
        sum=0,c=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum=sum+a[i];
        }
            
              
    
            if(sum<p)
            {
            cout<<"0"<<endl;
            continue;
            }
            if(sum>=p)
            {
            //    while(sum>=p)
            //    {
            //        c++;
            //        sum=sum-p;
            //    }
            c=sum/p;

               if(c<=d)
               cout<<c<<endl;
               else
                   cout<<d<<endl;
               
            }
    }
    return 0;
}
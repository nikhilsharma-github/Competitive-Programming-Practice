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
        int c,d;
        cin>>d>>c;
        int a,b,k,p,q,r;
        cin>>a>>b>>k;
        cin>>p>>q>>r;

        a=a+b+k;
        p=p+q+r;

        // cout<<" sum1 : "<<a<<" sum 2 : "<<p<<endl;
        

        int ans1,ans2;
        ans1=a+p+d+d;
        // cout<<"WITHOUT COUPON : "<<ans1<<endl;
            
        ans2=a+p;
        if(a>=150&&p>=150)
        {
            // cout<<" both sum is greater than 150 or equal\n";
            ans2=ans2+c;
        }
        else if((a>=150&&p<150)||(a<150&&p>=150))
        {
            // cout<<"any one is smaller than 150 and greater than 150\n";
            ans2=ans2+d+c;
        }
        else if(a<150&&p<150)
        {
            // cout<<" both are smaller than 150 \n";
            ans2=ans2+d+d+c;
        }

        // cout<<"WITH COUPON : "<<ans2<<endl;
       {
        if(ans2<ans1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       }
        
    }
    return 0;
}
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
        long long n, t=0,count=0,even=0;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        t=0;
        sort(v.begin(),v.end());
        
        // cout<<"given numbers : \n";
        // for(int i=0;i<n;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for (int i = 0; i < n; i++)
        {

            if(v[i]%2!=0)
            {
                t=v[i];
                // cout<<" t contains : "<<t<<endl;
                break;
            }
         }
         even=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0)
            even++;
            if(v[i]%2==0&&t%2!=0)
            count++;
            if(v[i]%2!=0&&t%2!=0)
            continue;
         }
        //  cout<<" TOTAL ODD NOS : "<<odd<<" times even turned to odd: "<<count<<endl;
        //  cout<<" total values : "<<n<<endl;
        if(even==n)
        cout<<"-1"<<endl;
        else if(count==0)
         cout<<"0"<<endl;
         else if(count>0)
         cout<<count<<endl;

         count=0;
         



    }
    return 0;
}
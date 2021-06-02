#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int test;
    cin >> test;
    while (test--)
    {
        cout<<endl;
        int n,mid=0,l=0,r=15,c=8;
        cin >> n;
        string k;
        cin >> k;
        int s[n];

        for (int i = 0; i < n; i++)
            s[i] = k[i] - 48;

        int sum = 0, a = 97;

        for (int i = 0; i < n; i++)
        {
             
             if(s[i]==0)
             {
                 r=r-c;
                 c=c/2;
             }
             if(s[i]==1)
             {
                 l=l+c;
                 c=c/2;
             }
             mid=(l+r)/2;
            // if (s[i] == 1)
            // {
            //     sum = sum + pow(2, i % 4);
            // }

            if(i%4==3)
            {
                // printf("%c",a+sum);  
                // v.push_back(97+sum);
                v.push_back(97+mid);
                mid=0;
                l=0,r=15,c=8;
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
                // printf("%c\n",v[i]);
                cout<<(char)v[i];
        }
            v.clear();
        // cout<<"bhenkelode";
    }
        // cout<<endl;
    return 0;
}
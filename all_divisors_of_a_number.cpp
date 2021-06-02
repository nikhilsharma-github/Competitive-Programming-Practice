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
        long long n;
        cin >> n;
       cout<<" all divisors of "<<n<<endl;
       cout<<"using non sorted order:"<<endl;
        for (int i = 1; i<= sqrt(n); i++)
        {
            if(n%i==0)
            {
            cout<<i<<" ";
            if(i!=(n/i))
            cout<<n/i<<" ";

            }

        }
        int i=0;
        cout<<endl;
        cout<<"using sorted order:"<<endl;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            cout<<i<<" ";
        }
        for(;i>=1;i--)
        {
            if(n%i==0)
            cout<<n/i<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
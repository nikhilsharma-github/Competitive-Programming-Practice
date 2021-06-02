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
        long long n, k;
        cin >> n >> k;

        long long c = 1;
           cout<<"using left shift operator"<<endl;
        // c = c << k-1;
        
        if (n&(1<<(k-1))!=0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;

        cout<<"using right shift operator"<<endl;
         
         if(((n>>(k-1))&1)==1)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
    return 0;
}
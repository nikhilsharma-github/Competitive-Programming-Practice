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
        long long n,k;
        cin>>n>>k;

        // while(n>=k)
        // {
        //     if(n==1&&k==0){
        //         break;

        //     }
        //     n=n-k;
        // }
        if(k==0)
        {
            cout<<n<<endl;
        }
        else{
        n=n%k;
        cout<<n<<endl;

        }
    }
    return 0;
}
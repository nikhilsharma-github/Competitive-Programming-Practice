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
            long long res=1;
        long long n,x;
        cin >> n>>x;


        while(x>0){

            if(x&1)
            {
                res=res*n;
            }

             n=n*n;
            x=x/2;
            
        }
        cout<<res<<endl;


    }
    return 0;
}

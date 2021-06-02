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
        cout << "TESTCASE: " << test + 1 << endl;
        long long n;
        cin >> n;
        cout << "INPUT: " << n << endl
             << endl;

        for (int i = 1; i <= n * 2 - 1; i++)
        {
            int k=n+1-i;
            for (int j = 1; j <= n * 2 - 1; j++)
            {
             if(j<=i){
                 cout<<n+1-j;
             }
             else if(j>i&&j<n*2-i){
                 cout<<j-n;
             }
             else{
                //  cout<<n*2-j;
             }                
            }
            cout << endl;
        }
        cout << endl;
        // for (int i = 1; i <= n * 2 - 1; i++)
        // {
        //     int p = 5;

        //     for (int j = 1; j <= n * 2 - 1; j++)
        //     {

        //         // if(i<5)
        //         // {
        //         //   if((j<=i))
        //         //   {
        //         //     cout<<p;
        //         //     p--;
        //         //   }
        //         //   else if(j>n*2-1-i){

        //         //     p++;
        //         //     cout<<p;
        //         //   }
        //         //   else{
        //         //       cout<<p+1;

        //         //   }

        //         // }
        //         // else{
        //         //    if((j<=i))
        //         //   {
        //         //     cout<<p;
        //         //     p--;
        //         //   }
        //         //   else if(j>n*2-1-i){

        //         //     p++;
        //         //     cout<<p;
        //         //   }
        //         //   else{
        //         //       cout<<p+1;

        //         //   }

        //         // }
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }
    return 0;
}
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
        int k, c = 10;
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        // for (int i = 0; i < 10; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        cin >> k;
        // cout<<"GIVEN K: "<<k<<endl;
        for(int i=9;i>=0;i--)
        {
            // cout<<" here i is : "<<i<<endl;
            if(a[i]<=k)
            {
                // cout<<" here a"<<i<<" is smaller or equal to "<<k<<endl;
            k=k-a[i];
            // cout<<" new k : "<<k<<endl;
            }
            else{
                // cout<<" here a"<<i<<" is greater than k: "<<k<<" at i : "<<i<<endl;
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
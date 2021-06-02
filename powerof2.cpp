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
        // cout<<80&79<<endl;
        long long n, x = 1;
        cin >> n;
        while (x < n)
        {
            x = x << 1;
        }
        cout<<"loop sol: "<<endl;
        if (x == n)
            cout << "yes" << endl;
            else
                cout << "no" << endl;
         cout<<"const sol: "<<endl;
         if(n&(n-1))
         cout<<"no"<<endl;
         else
         cout<<"yes"<<endl;   
        
    }
    return 0;
}
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
        // cout<<2^1<<endl;
        int a, b, x = 1;
        cin >> a >> b;
        int sa = (a ^ b);
        cout<<"sum a value: "<<sa<<endl;
        while (x < b)
        {
            x = x << 1;
        }
        cout<<"value of x: "<<x<<endl;
        
        int r=x-1;
        int sb = (x ^ r);
        cout<<"value of sb: "<<x<<endl;
        if (sa <= sb)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
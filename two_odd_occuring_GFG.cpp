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
        long long n, t, xr1 = 0, xr2 = 0, xra = 0;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
            // cout<<"value inserted : "<<v[i]<<endl;
        }


// cout<<"array is : "<<endl;
         for(int i=0;i<n;i++)
         {
            xra = (xra ^ v[i]);
            //  cout<<v[i]<<" ";
         }
        cout << "xor of all nos : " << std::bitset<8>(xra) << endl;
        int setbit = xra & (~(xra - 1));

        cout << " xra bit which is leftmost 1 : " << std::bitset<8>(setbit) << endl;
         cout<<endl;
        for (int i = 0; i < n; i++)
        {
            if (((setbit) & (v[i])) != 0)
            {
                cout << std::bitset<8>(setbit) << "&" << std::bitset<8>(v[i]) << "is non zero" << endl;
                xr1 = (xr1 ^ v[i]);
                cout << "xr1: " << std::bitset<8>(xr1) << endl;
            }
            else
            {
                cout << std::bitset<8>(setbit) << "&" << std::bitset<8>(v[i]) << "is zero" << endl;

                xr2 = (xr2 ^ v[i]);
                cout << "xr2: " << std::bitset<8>(xr2) << endl;
            }
        }

        cout << "two odd occuring nos are " << xr1 << " and " << xr2 << endl;
    }
    return 0;
}
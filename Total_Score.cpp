#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
       
        int n, k, ans = 0;
        cin >> n >> k;
        cout<<n<<k;
        vector<int> p;
        vector<string> s;
        // for (int i = 0; i < k; i++)
        // {
        //     cin >> p[i];
        // }
        // for (int i = 0; i < k; i++)
        // {
        //     cin >> s[i];
        // }

        cout<<n<<k;

         for (int i = 0; i < k; i++)
        {
            cout<<"partic"<<endl;
            cout<< p[i]<<" ";
            cout<<endl;
        }
        for (int i = 0; i < k; i++)
        {
            cout<<"string"<<endl;
            cout<< s[i]<<endl;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int i = 0; i < k; i++)
        //     {
        //         // cout<<"gadafs";
        //         string r = s[i];
        //         if (r[i] == '1')
        //             ans = ans + p[i];

        //         cout << ans << endl;
        //         ans = 0;
        //     }
        // }
    }
    return 0;
}
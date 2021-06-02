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
        int n, t, k, c = 0;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }
        // cout<<"sum : "<<k<<endl;
        // cout << "given array is : " << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;

        // for (int i = 1; i < n; i++)
        // {
        //     if (v[i] + v[i - 1] == k)
        //     {
        //         v[i - 1] = 0;
        //         c++;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                v[i] = 0;
                c++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 if(i==j)
                 continue;
               else if (v[i] + v[j] == k)
                {
                    c++;
                    v[i] = 0;
                    
                }
            }
        }
        cout << n - c << endl;

        // if(n!=k)
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                cout << v[i] << " ";
            else
                continue;
        }
        cout << endl;
    }
    return 0;
}
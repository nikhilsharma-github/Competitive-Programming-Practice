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

        multiset<long long int> s;
        long long n, m, k, t, res = 1;
        cin >> n >> m >> k;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {

        //         t = k + i + j + 2;
        //         cout << k + i + j + 2 << " ";
        //         s.insert(t);
        //         t = 0;
        //     }
        //     cout << endl;
        // }

        // cout << "values in set: " << endl;
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << (*it) << endl;
        //     res = res ^ (*it);
        //     cout << "current xor value: " << res << endl;
        // }
        // cout << "final xor value : " << endl;
        long long minn = min(m, n);
        long long maxx = max(m, n);
        if (n == m)
        {
            for (int i = 1; i <= m * n; i++)
            {
                if ((i) % 2 == 0)
                {
                    cout<<"ignoring "<<endl;
                    cout<<i+k<<endl;
                    continue;
                }
                else
                {
                    cout<<"calculating : "<<i+k<<endl;

                    res = res ^ (i+k);

                }
            }
        }
        else
        {
            res = res ^ minn ^ maxx;
        }
        cout << res << endl;
    }
    return 0;
}
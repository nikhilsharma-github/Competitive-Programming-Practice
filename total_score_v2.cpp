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

        long long n = 0, p = 0;
        cin >> n >> p;
        // cout << n << p << endl;
     long long a[p];
        for (int i = 0; i < p; i++)
            cin >> a[i];

       

        for (int i = 0; i < n; i++)
        {
            long long ans = 0;
             char s[p+2];
             cin>>s;

             
            for (int i = 0; i < p; i++)
            {
                if (s[i] == '1')
                    ans = ans + a[i];
            }
            cout << ans << endl;
            ans = 0;
        }
    }
    return 0;
}
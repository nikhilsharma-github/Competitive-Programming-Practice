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
        long long n, p, q, ans = 0;
            long long j, k, l, m, ans1, ans2;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // cout<<" sorted array values : "<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        if (a[0] >= 0 && a[n - 1] > 0)
        {
            // cout<<" here complete array is positive \n";
            q = a[n - 1];
            p = a[n - 2];
            ans = (p * q) + (q - p);
            
        }
        else if (a[0] < 0 && a[n - 1] <= 0)
        {

            // cout<<" here complete array is negative \n";
            q = a[1];
            p = a[0];
            ans = (p * q) + (q - p);
        }
        else if (a[0] < 0 && a[n - 1] > 0)
        {
            // cout<<" here complete array is both +ve and -ve \n";
            k = a[n - 1];
            j = a[n - 2];
            ans1 = (j * k) + (k - j);
            m = a[1];
            l = a[0];
            ans2 = (l * m) + (m - l);

            ans = max(ans1, ans2);
        }
        cout<<ans<<endl;
        ans=0,ans1=0,ans2=0;
    }
    return 0;
}
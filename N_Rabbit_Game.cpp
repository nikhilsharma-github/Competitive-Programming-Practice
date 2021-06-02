#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, t, k = 0, r = 0, r1 = 0;
    cin >> n;
    vector<long long> c;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        c.push_back(t);
    }
    int i = 0;
    // cout << " loop 1 works below : " << endl;
    for (int i = 1; i < n; i++)
    {
        if (c[i] >= c[i - 1])
        {
            // cout << c[i] << " is greater than or equal to  " << c[i - 1] << endl;
            r++;
        }
        else
        {
            k = i;
            // cout << " loop 1 breaked for index " << k << endl;
            break;
        }
    }
    r++;
    // cout << " final r from loop 1 :" << r << endl;

    if (r < n)
    {
        // cout << "k: " << k << endl;
        // cout << "r: " << r << endl;
        // cout << " loop 2 ends at index: " << k << endl;
        for (int i = n - 1; i >= k+1; i--)
        {
            if (c[i - 1] >= c[i])
            {
                // cout << c[i - 1] << " is greater than or equal to  " << c[i] << endl;
                r1++;
            }
            else
            {
                // cout << " loop 2 breaked for index " << i-1 << endl;
                break;
            }
        }
      r1++;
        // cout << "final r2 from loop 2: " << r1 << endl;

        // cout<<" FINAL ANS : "<<r1+r<<endl;
    }

    cout<<r+r1<<endl;

    return 0;
}
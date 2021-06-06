#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }

        int l = 0, r = n - 1;
        for (int i = 1; i <= n; i++)
        {

            if ((r - l + 1) % 2 != 0)

            {

                a[(l + r) / 2] = i;
                 cout<<"index is : "<<(l+r)/2<<" and number put on is : "<<i<<endl;
            }

            else if ((r - l + 1) % 2 == 0)
            {
                a[(l + r - 1) / 2] = i;
                 cout<<"index is : "<<(l+r-1)/2<<" and number put on is : "<<i<<endl;
            }
        }

        for (int i = 0; i < n; i++)
        {

            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
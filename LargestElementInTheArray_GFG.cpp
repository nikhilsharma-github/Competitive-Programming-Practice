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
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = INT_MIN;
        cout<<m<<endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
                m = a[i];
        }
        cout << " max element is : " << m << endl;
    }
    return 0;
}
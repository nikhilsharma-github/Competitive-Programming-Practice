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
        long long n, res = 0;
        cin >> n;

        cout << "XOR from 1 to n is : " << endl;

        for (int i = 1; i <= n; i++)
        {
            res = res ^ i;
        }

        cout << " xor using loop : " << res << endl;

        int d = n % 4;

        cout << " xor using O(1) : " << endl;
        if (d == 0)
            cout << n << endl;
        else if (d == 1)
            cout << "1" << endl;
        else if (d == 2)
            cout << n + 1 << endl;
        else if (d == 3)
            cout << "0" << endl;
    }
    return 0;
}
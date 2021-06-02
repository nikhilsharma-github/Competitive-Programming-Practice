#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    while (n--)
    {
        string v;
        cin >> v;
        int b = 0, k = 5;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == '1' && v[i + 1] != '1')
                b++;
        }
        // here printing val of b
        cout << b << endl;
    }
    return 0;
}
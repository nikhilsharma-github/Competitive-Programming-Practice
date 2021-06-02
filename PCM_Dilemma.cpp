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
        string s;
        cin >> s;
        bool p=false, c=false, m=false;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == 'P')
                p = true;

            if (s[i] == 'C')
                c = true;
            if (s[i] == 'M')
                m = true;
        }
        if (p != true || c != true || m != true)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
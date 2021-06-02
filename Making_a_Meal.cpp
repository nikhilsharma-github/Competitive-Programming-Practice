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
        int n, c = 0, e = 0, d = 0, h = 0, f = 0, o = 0;
        cin >> n;
        string s, t;
        for (int i = 1; i <= n; i++)
        {
            cin >> t;
            s = s + t;
        }
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'c')
                c++;
            if (s[i] == 'e')
                e++;
            if (s[i] == 'o')
                o++;
            if (s[i] == 'd')
                d++;
            if (s[i] == 'h')
                h++;
            if (s[i] == 'f')
                f++;
        }
        // cout<<"C : "<<c<<" e : "<<e<<" O : "<<o<<" H: "<<h<<" D :" <<d<<" f : "<<f<<endl;
        int r = 0;
        while (c >= 2 && e >= 2 && o && f && d && h)
        {
            r++;
            c = c - 2;
            e = e - 2;
            o = o - 1;
            d = d - 1;
            f = f - 1;
            h = h - 1;
        }
        cout << r << endl;
    }
    return 0;
}
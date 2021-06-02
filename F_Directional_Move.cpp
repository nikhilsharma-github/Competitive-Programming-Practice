#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    // cout<<test;
    while (test--)
    {
        int n, c = 0, ac = 0, p = 0, r = 0;
        cin >> n;
        // cout << n << endl;
        string s;
        cin >> s;
        // cout << s << endl;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                c++;
            }
            if (s[i] == '1')
            {
                ac++;
            }
        }
        // cout<<" C: "<<c<<" ac : "<<ac<<endl;

        if (ac >= c)
        {
            p = ac - c;
            p = p % 4;
             if (p == 2)
                cout << "W" << endl;
            else if (p == 3)
                cout << "S" << endl;
            else if (p == 0)
                cout << "E" << endl;
           else if (p == 1)
                cout << "N" << endl;
        }
        if (c > ac)
        {
            p = c - ac;
            p = p % 4;
             if (p == 2)
                cout << "W" << endl;
            else if (p == 3)
                cout << "N" << endl;
            else if (p == 0)
                cout << "E" << endl;
           else if (p == 1)
                cout << "S" << endl;
        }

    }
        return 0;
}
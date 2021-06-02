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
        string s;
        cin >> s;

        cout << "for string s: " << s << endl;
        long long len = s.length();
        long long comb = pow(2, len);

        for (int i = 0; i < comb; i++)
        {

            for (int j = 0; j < len; j++)
            {

                if ((i & (1 << j))!=0)
                    cout << s[j];
            }
            cout<<endl;
        }
    }
    return 0;
}
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
        // getline(cin, s);
        cin>>s;

        if (s.size() < 5)
        {
            // cout<<"for :\n";
            cout << s << endl;
            // cout<<"size is less than 5"<<endl;

            continue;
        }
        else
        {
            for (int i = 4; i < s.size(); i++)
            {
                if (s[i - 4] == 'p' && s[i - 3] == 'a' && s[i - 2] == 'r' && s[i - 1] == 't' && s[i] == 'y')
                {
                    s[i - 2] = 'w';
                    s[i - 1] = 'r';
                    s[i] = 'i';
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
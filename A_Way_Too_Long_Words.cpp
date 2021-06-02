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

        string s;
        // cin>>s;
        getline(cin, s);
        long long k = s.size();
        // k=0;

        if (k < 10)
            cout << s << endl;
        else
        {
            cout << s[0] << s.size() - 2 << s[n - 1] << endl;
        }
    }
    return 0;
}
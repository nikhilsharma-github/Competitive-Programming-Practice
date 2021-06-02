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
        long long n, t = 0, nsorted = 0, q = 0, l = 0,firstval,res=0;
        cin >> n;

        vector<int> s;
        for (int i = 0; i < n; i++)
        {

            cin >> t;
            s.push_back(t);
        }
           firstval=s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] < s[i - 1])
            {
                nsorted = 1;
                l = i;
                break;
            }
        }
        if (nsorted == 1)
        {
            cout << "YES" << endl;
            cout << q << endl;
        }
        else
        {
            int i = l;
            i = i + 1;
            cout << " suffix loop started from  l : " << i << endl;
            while ((s[i] < s[i - 1]) && i < n)
            {
                cout << s[i] << " is smaller than " << s[i - 1] << " so incremented i : " << i << endl;
                i++;
            }

            if(s[i]<=firstval)
            {
                res++;
                firstval=s[i];
            }
        }
    }
    return 0;
}
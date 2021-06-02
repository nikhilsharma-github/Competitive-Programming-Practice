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
        int r = 0, flag = 0,fin=0,j=0;
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // cout << s << endl
            //  << endl;
        // cout << k << endl
            //  << endl;

        int len = s.length();

        for (int i = 0; i < len; i++)
        {
            // cout<<"current index is : "<<i<<endl;
            if (s[i] == '*')
            {
                // cout<<"* present at index : "<<i<<endl;
                r = 1;
                j=i+1;
                while(s[j]=='*')
                {
                    // cout<<"STar present at index : "<<j<<endl;
                    j++;
                    r++;
                }
                i=j;
                if(r>=k)
                {
                    // cout<<r<<"is greater than or equal to :"<<k<<endl;
                    fin=1;
                    break;
                }
            }
        }

        if (fin==1)
            cout << "YES" << endl;
            else
            cout<<"NO"<<endl;
    }

    return 0;
}
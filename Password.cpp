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
        int l = 0;
        int uc = 0, lc = 0, d = 0, sc = 0;
        string s;
        cin >> s;

        for (int i = 0; s[i] != '\0'; i++)
            l++;

        // cout << "length: " << l << endl;

        if (l < 10)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {

            for (int i = 0; s[i] != '\0'; i++)
            {
                int temp = s[i];
                // cout<<s[i]<<endl;
                if (temp >= 97 && temp <= 122 && lc == 0)
                {
                    lc = 1;
                    // cout << "passed for small letter :" << s[i] << endl;
                }
                if ((temp >= 65 && temp <= 90) && uc == 0)
                {
                    if (i != 0 && i != l - 1)
                    {
                        // cout << "passed capital letter for : " << s[i] << endl;
                        uc = 1;
                    }
                    else
                    {
                        uc=0;
                    }
                }
                if (temp >= 48 && temp <= 57 && d == 0)
                {
                    if (i != 0 && i != l - 1)
                    {
                        // cout << "passed  digit for : " << s[i] << endl;
                        d = 1;
                    }
                    else
                    {
                    d=0;
                    }
                }
                if ((sc == 0) && (temp == 64 || temp == 63 || temp == 35 || temp == 37 || temp == 38))
                {

                    if (i != 0 && i != l - 1)
                    {
                        // cout << "passed special letter for : " << s[i] << endl;
                        sc = 1;
                    }
                    else
                    {
                       sc=0;
                    }
                }
            }
                if(lc==1&&uc==1&&sc==1&&d==1)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;

                lc=1,uc=1,d=1,sc=1;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test, temp;
    cin >> test;
    while (test--)
    {
        int c = 0;
        string s;
        cin >> s;
        int n = s.size();
        sort(s.begin(), s.end());
        
        // cout << s;
        for (int i = 1; s[i]!='\0'; i++)
        {
             if(s[i]==s[i-1])
             c++;
             
        }
        if (c == 0)
            cout << "0" << endl;
        else
            cout << c << endl;
    }
    //   if(c==0)
    //     cout<<"0"<<endl;
    //     else
    //     cout<<c<<endl;

return 0;
}
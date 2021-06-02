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
        int a=0,b=0,c=0;
        bool flag = true;
        string s;
        cin >> s;
        //   cout<<abs(6-8);
        //   cout<<abs(8-6);
        for (int i=1;i<s.size();i++){
            a=(int)s[i-1];
            b=(int)s[i];
            c=abs(b-a);
            if(c!=1)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
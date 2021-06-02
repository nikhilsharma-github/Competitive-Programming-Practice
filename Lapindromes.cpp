#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test, len = 0, a = 1, b = 1;
    cin >> test;
    while (test--)
    {
        a = 1, b = 1,len=0;
        string s;
        cin >> s;
        
        for(int i=0;s[i]!='\0';i++)
        len++;
        // cout<<"length : "<<len<<endl;
        
        // FRONT LAST MATCH
        
     
         if(len%2==)

        for (int i = 0; i <=(len / 2)-1; i++)
        {
            
            if (len % 2 == 0)
            {
                if (s[i] != s[len-1-i])
                {
                    a = 0;
                    break;
                }
            }
            else
            {
                if (s[i] != s[len-1-i])
                {
                    a = 0;
                    break;
                }
            }
        }
        //FRONT FRONT MATCH

        for (int i = 0; i < len / 2; i++)
        {

            if (len % 2 == 0)
            {
                if (s[i] != s[(len/2)+i])
                {
                    b = 0;
                    break;
                }
            }
            else
            {
                // if(i==len/2)
                // break;

                if (s[i] != s[(len/2)+i+1])
                {
                    b = 0;
                    break;
                }
            }
        }

        if(a==1||b==1)
        // if(a==1||b==1)
        cout<<"YES"<<endl;
        else
        {
    cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
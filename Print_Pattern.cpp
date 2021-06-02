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
        int n,x=1,y=2;
        cin >> n;

        for(int i=1;i<=4;i++){
            for(int j=1;j<=n;j++)
            {
            if(i%2==0)
            {
             j=y;   
            }
              x=x+3*(j-1);
              cout<<x;
              cout<<" ";
            }
            y++;
            cout<<endl;
        } 
    }
    return 0;
}
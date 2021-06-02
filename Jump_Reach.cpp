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
int n;
cin >> n;
int c=0;
    if(n<=2)
    {
        cout<<n<<endl;
        continue;
    }
    else{
        if(n%1==0)
        c++;
        if(n%3==0)
        c++;
        if(n%2==0)
        c++;
        if(n%2==1)
        c++;
        if(n%3==2)
        c++;
        if(n%3==1)
        c++;
        


          
    }
    cout<<c<<endl;
}
return 0;
}

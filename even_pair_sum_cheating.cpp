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

long long int a,b;
cin>>a>>b;

    if(a==1&&b==1)
    {
        cout<<'1'<<endl;
        continue;
    }

    long long int ans=0;
    long long even1=(int)a/2;
    long long even2=(int)b/2;
    long long odd1=(int)(a+1)/2;
    long long odd2=(int)(b+1)/2;

    ans= even1*even2+odd1*odd2;

    cout<<ans<<endl;

}
return 0;
}
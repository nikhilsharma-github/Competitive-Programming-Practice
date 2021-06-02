#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// long long test;
// cin >> test;
// while (test--)
// {
long long n,sum=0;
cin >> n;

sum=(n*(n+1))/2;
// cout<<"sum upto "<<n<<" is : "<<sum<<endl;

if(sum%2==0)
cout<<"0"<<endl;
else
cout<<"1"<<endl;
// }
return 0;
}
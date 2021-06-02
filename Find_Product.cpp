#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int test;
// cin >> test;
// while (test--)
// {
// int n;
// cin >> n;
// }

int n;
cin>>n;
long long int ans=1;
int *a= new  int (n);
for(int i=0;i<n;i++)
{
cin>>a[n];
ans=(ans*a[n])%1000000000+7;
}

cout<<ans;
return 0;
}
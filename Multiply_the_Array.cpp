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
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

long long int pro=1;

for(int i=0;i<n;i++)
pro=pro*a[i];

cout<<pro<<endl;
}
return 0;
}
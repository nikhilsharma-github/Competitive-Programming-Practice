#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int n,d,ms=0,cs=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];


for(int i=0;i<n;i++){
  cs=cs+a[i];
  a[i]=cs;

}

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}

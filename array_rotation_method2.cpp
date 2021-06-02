#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//Shifting one by one element
// time complexity o(n2)
int a[7]={1,2,3,4,5,6,7};
int t[2];
int d=2;
int n=7;
int i,j;

for(int i=0;i<d;i++)
{
int temp=a[0];
for(int i=0;i<n-1;i++)
a[i]=a[i+1];

a[n-1]=temp;

}

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
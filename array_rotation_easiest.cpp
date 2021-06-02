#include <bits/stdc++.h>
using namespace std;
int gcd(int n,int k);
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,d,r=0,k;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

  int g= gcd(n,d);

//   cout<<g;

    for(int i=0;i<g;i++)
    {
         int temp=a[i];
         int j=i;
         while(1){
              k=j+d;
             if(k>=n)
             k=k-n;
             if(k==i)
             break;

             a[j]=a[k];
             j=k;

         }
         a[j]=temp;
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
return 0;
}

int gcd(int n,int k)
{
    if(n==0)
    return k;


   return gcd(k%n,n);
}
#include <bits/stdc++.h>
using namespace std;

void binarysearch(int a[],int n);
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[7]={1,2,3,4,5,6,7};
int t[2];
int d=2;
int n=7;
int i,j;


binarysearch(a,n);
return 0;
}

void binarysearch(int a[],int n)
{
int x;
cin>>x;
int mid;
 int l=0;
 int r=n-1;
 while(l<=r)
 {
     cout<<"\n value of mid : "<<mid<<endl;
     cout<<endl<<"l : "<<l<<" "<<"r : "<<r<<endl;
      mid=(l+r)/2;
     if(a[mid]>x)
     r=mid-1;
     if(x>a[mid])
     l=mid+1;
     else
     {
         cout<<"index is : "<<mid+1<<endl;
         exit(0);
         }
     
 }
 cout<<"not found";
 exit(0);

}
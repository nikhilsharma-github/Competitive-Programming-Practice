#include <bits/stdc++.h>
using namespace std;
 void RangeSumQuery();
int a[10]={-5,2,5,-3,9,7,4,-1,8,-6};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
for(int i=0;i<10;i++)
cout<<a[i]<<" ";
cout<<endl;
 RangeSumQuery();
return 0;
}

void RangeSumQuery(){
  int x,y;
  cin>>x>>y;

   for(int i=1;i<10;i++)
   {
       a[i]=a[i]+a[i-1];
   } 

for(int i=0;i<10;i++)
cout<<a[i]<<" ";
cout<<endl;
   cout<<a[y]-a[x-1];

   

}


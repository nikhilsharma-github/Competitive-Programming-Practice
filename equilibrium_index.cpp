#include <bits/stdc++.h>
using namespace std;
//  void RangeSumQuery();
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int test;
int i;
int n;

cin>>n;
 a[n];

for(int i=0;i<n;i++)
cin>>a[i];

int sum=0;
// for(int i=0;i<10;i++)
// cout<<a[i]<<" ";
// cout<<endl;
//  for(int i=0;i<10;i++)
//    {
//        sum=a[i]+sum;
//    } 
//    cout<<sum<<endl;
 sum = 0;
    int leftsum = 0;
    for (i=0; i<n;i++)
        sum += a[i];

    for (i=0;i< n;i++)

    {
        sum=sum-a[i];

        if(sum==leftsum){
          cout<<i<<endl;
          break;

        }

        leftsum=leftsum+a[i];
         // now sum will be righsum for index i

    }
    
return 0;
}



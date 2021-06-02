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

unsigned long long int a,b,i,j;
int pairsum=0;
cin>>a>>b;
// scanf("%llu %llu",&a,&b);
a=min(a,b);
b=max(a,b);
int k1,k2;
for( i=1;i<=a;i++)
 for( j=1;j<=b;j++){

         if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))
         continue;
         else
         pairsum++;
          
           
      // k1=i%2;
      // k2=j%2;

      // if(k1==k2)
      //  pairsum++;
      //  else
      //  continue;    

 }
 cout<<pairsum<<endl;
// printf("%d\n",pairsum);
}
return 0;
}
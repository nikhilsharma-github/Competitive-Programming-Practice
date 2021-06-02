#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long test;
cin >> test;
while (test--)
{
int n;
int c=1,r=0; 
cin >> n;
cout<<"binary number is : "<<endl;
cout<<std::bitset<8>(n)<<endl;

   while(n!=0)
   {
       if(n&1==1)
       r++;

       n=n>>1;
   }
 cout<<"no of set bits : "<<r<<endl;
}
return 0;
}
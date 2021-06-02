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
int n,f,v;
cin>>n;
 cout<<"bit of "<<n<<" is : "<<std::bitset<sizeof(int)*8>(n)<<endl;
v =INT_MAX;
 cout<<"bit of INT_MAX "<<v<<" is : "<<std::bitset<sizeof(int)*8>(v)<<endl;
 
f=v-n;

 cout<<"bit flipped of "<<n<<" is : "<<std::bitset<sizeof(int)*8>(f)<<endl;
 

   
   
}
return 0;
}
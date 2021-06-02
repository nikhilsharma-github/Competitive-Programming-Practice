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
long long n,k;
cin >> n>>k;

cout<<"given no is : "<<n<<endl;
   cout<<"bitwise   : "<<std::bitset<sizeof(int)*8>(n)<<endl;
  
  int r=0;
   cout<<"bitwise r : "<<std::bitset<sizeof(int)*8>((1<<(k)))<<endl;
   r=(n&(1<<(k)));

  if(r==0)
  cout<<"NOT SET"<<endl;
  else
  cout<<"SET"<<endl<<endl;


}
return 0;
}

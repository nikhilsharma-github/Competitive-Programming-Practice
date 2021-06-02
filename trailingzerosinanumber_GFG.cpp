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
long long n,res=0;
cin >> n;

   for(long long i=5;i<=n;i=i*5){
       res=res+(n/i);

   }
   cout<<res<<" trailing zeroes in "<<n<<endl;
}
return 0;
}
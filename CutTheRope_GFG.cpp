#include <bits/stdc++.h>
using namespace std;
long long cutTheRope(long long n,long long a,long long b,long long c){

  if(n==0)
  return 1;
 if(n<0)
  return -1;

  long long mmax=max(cutTheRope(n-a,a,b,c),max(cutTheRope(n-b,a,b,c),cutTheRope(n-c,a,b,c)));

  if(mmax==-1)
  return -1;
   
   return mmax+1;
  


}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long test;
cin >> test;
while (test--)
{
long long n,a,b,c;
cin >> n>>a>>b>>c;
cout<<" rope of length "<<n<<" can be cut into maximum "<<cutTheRope(n,a,b,c)<<" pieces"<<endl;
}
return 0;
}
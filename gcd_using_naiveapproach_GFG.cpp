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
 int n,m,res=0;
 cin >> n>>m;
  res=min(n,m);

  while(res>0)
  {
      if((n%res==0)&&(m%res==0)){
        break;
      }
      res--;
  }
  cout<<"gcd of "<<n<<" and "<<m<<" is "<<res<<endl;


}
return 0;
}
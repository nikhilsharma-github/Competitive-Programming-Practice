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
int n;
cin >> n;
 int ans=0;
 int k=0;
  for(int i=1;i<=n;i++)
  {
      k=0;
      for(int j=1;j<=i;j++){

          if(i%j==0)
          k++;
      }

      if(k==0)
      ans=ans+i;

  }
  cout<<ans<<endl;
}
return 0;
}
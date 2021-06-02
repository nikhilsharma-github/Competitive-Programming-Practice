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
  string s;
  cin>>s;
  int r=s.size();
//   cout<<r<<endl;
  for(int i=1;i<r;i=i+2)
  {
      char temp=s[i];
      s[i]=s[i-1];
      s[i-1]=temp;
  }

  cout<<s<<endl;
}
return 0;
}
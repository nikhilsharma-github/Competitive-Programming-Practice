#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int l,int u){
   
    //  if(s[l]!=s[u])
    //  return false;
    //  else if(l>u||(l==0&&u==0))
    //  return true;
    

    // return palindrome(s,l+1,u-1);


      if(l>=u)
      return true;

      return ((s[l]==s[u])&&palindrome(s,l+1,u-1));
}
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
 int c=s.length();
 cout<<"string is : "<<s<<endl;
cout<<palindrome(s,0,c-1)<<endl;
}
return 0;
}
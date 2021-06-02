#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int test;
long long n;
cin>>n;
  
 if(n==2)
 cout<<"3"<<endl;
 else if(n%2==0)
 cout<<(2*n)-2<<endl;
 else if(n%3==0)
 cout<<(2*n)-2<<endl;
return 0;
}
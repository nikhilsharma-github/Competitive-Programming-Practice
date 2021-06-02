#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 string a,b;
 cin>>a>>b;
//  cout<<a<<" "<<b<<endl;

 long long noba,nobb,nota,notb,nofa,nofb,notpa,notpb,resa,resb;
 cin>>noba>>nobb;
 cin>>nota>>notb;
 cin>>nofa>>nofb;
//  cout<<noba<<" "<<nobb<<endl;
//  cout<<nota<<" "<<notb<<endl;
//  cout<<nofa<<" "<<nofb<<endl;
   
    notpa=noba-nota;
    notpb=nobb-notb;
   resa=(nota*3+nofa+notpa*2);
   resb=(notb*3+nofb+notpb*2);

      if(resa>resb)
      cout<<a<<endl;
      else
      cout<<b<<endl;
      


return 0;
}
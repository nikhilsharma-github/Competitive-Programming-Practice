#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long r,o,c;
cin >> r>>o>>c;
  
   int rm= (20-o)*6*6;

//    cout<<"max runs occur in remaining overs "<<20-o<<" is "<<rm<<endl;    
    int rr= r-c;
    // cout<<" required runs : "<<rr<<endl;

    if(rm>rr)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){


long long n;
cin>>n;
// cout<<"GIVEN NO IS : "<<n<<endl;
if(n<6){
cout<<"0"<<endl;
}
else if(n%2!=0)
{
 cout<<"0"<<endl;
}
else{
    // cout<<"ciel working here ; "<<ceil(n/4.0)<<endl;
    float b= ceil(n/4.0);
    cout<<b-1<<endl;

}
// }

return 0;
}
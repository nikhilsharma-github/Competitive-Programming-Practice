#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long n,t;
cin>>n;
vector <long long> v;
while(cin>>t){
    // cin>>t;
    v.push_back(t);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    // v.push_back(t);
}



return 0;
}
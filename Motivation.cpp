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
        vector<pair<int, int>> v;
        long long n, x,s,r;
        cin >> n >> x;

         for(int i=0;i<n;i++){
            
            cin>>s>>r;
            if(s>x)
            continue;
            else{
                v.push_back(make_pair(r,s));
            }

         }
           sort(v.begin(),v.end());
          for(int i=0;i<v.size();i++)
          {
            //   cout<<v[i].first<<" "<<v[i].second<<endl;
          }
         int size=v.size();
         cout<<v[size-1].first<<endl;
    }
    return 0;
}
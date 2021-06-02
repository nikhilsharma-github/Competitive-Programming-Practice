#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,x=0;
    cin>>n>>m;
       
    //    vector<vector<char>> v(0);
         char v[n][m];

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               
               cin>>v[i][j];
            //  cout<<v[i][j]<<endl;
               if(v[i][j]=='x')
               x++;
           }
       }
    cout<<x<<endl;
    x=0;
    return 0;
}
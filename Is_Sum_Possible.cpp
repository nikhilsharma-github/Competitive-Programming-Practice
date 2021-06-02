#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int q,c=0;
cin>>q;
    // int k=n;
while(q--)
{
    int v;
    cin>>v;
    // cout<<"value to find: "<<v<<endl;
     for(int i=0;i<n;i++)
     {
         if(a[i]==v)
         {
            //  cout<<"hella";
         c++;

         }
     }
       
       

  
cout<<c<<endl;
}
return 0;
}
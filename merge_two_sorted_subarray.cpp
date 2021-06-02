#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int m,n;
cin>>m>>n;
int a1[m],a2[n];
for(int i=0;i<m;i++)
cin>>a1[i];
for(int i=0;i<n;i++)
cin>>a2[i];

// for(int i=0;i<m;i++)
// cout<<a1[i]<<" ";


int a3[m+n],k=0,i=0,j=0;

while(i<m&&j<n)
{
  
   if(a1[i]<a2[j])
    {
        a3[k]=a1[i];
        i++,k++;
    }
    else{
        a3[k]=a2[j];
        j++,k++;
    }



}

while(i<m)
{
    a3[k]=a1[i];
    i++,k++;
}
while(j<n)
{
    a3[k]=a2[j];
    j++,k++;
}


cout<<endl;
for(int j=0;j<n+m;j++)
cout<<a3[j]<<" ";

return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
cin >> test;
while (test--)
{
int n;
cin >> n;

long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
 
    long long msf=INT_MIN,mth=0;
   for(int i=0;i<n;i++)
      {
         mth=mth+a[i];
            //  if(msf<mth)
            //    msf=mth;
            if(mth<a[i])
            mth=a[i];

            //    if(mth<0)
                //  mth=0;

                if(mth>msf)
                msf=mth;

      }
      cout<<msf;
}
return 0;
}
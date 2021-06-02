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
         long long int d=0,sum=0;
       long long int n,i;
        cin >> n;
        long long  int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout<< a[i]<<" ";
        }
        sort(a,a+n);
        
       long long  int a1=0,a2=0,a3=0;
         a1=fabs(a[0]-a[n-1])+fabs(a[1]-a[n-1])+fabs(a[0]-a[1]);
         a2=fabs(a[0]-a[n-1])+fabs(a[0]-a[n-2])+fabs(a[n-2]-a[n-1]);
        //  a3=2*(a[0]-a[n-1]);
        //  cout<<endl;
        //  cout<<" "<<a1<<" "<<a2<<" "<<a3<<endl;

        long long int  m=max(a1,a2);
         m=max(m,a3);
        cout<<m<<endl;
        // cout<<sum<<endl;
    }
    return 0;
}
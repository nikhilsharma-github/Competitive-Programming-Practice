#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
       int a[n];
        
        for(int i=0;i<n;i++)
        cin>>a[n];


         int msf=INT_MIN,mtn=INT_MIN;
        for(int i=0;i<n;i++){
            if(msf<a[i]){
                msf=msf+a[i];
                mtn=msf;
            }
            else if(msf<mtn){
                msf=mtn;
            }
             
        }
    }
    return 0;
}
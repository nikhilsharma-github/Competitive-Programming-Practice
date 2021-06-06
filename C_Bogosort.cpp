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

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a,a+n,greater<int>());


        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        
    }
    return 0;
}
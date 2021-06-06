#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


void print(int a[],int n){
    cout<<"array is : "<<endl;

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        long long n,d;
        cin >> n>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=1;i<=d;i++){
            long long temp=a[0];

             for(int i=1;i<n;i++){
                 a[i-1]=a[i];
             }
             a[n-1]=temp;
        }

        print(a,n);
    
    return 0;
}
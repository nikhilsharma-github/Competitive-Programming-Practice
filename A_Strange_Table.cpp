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
        unsigned long long n, m, x, temp = 0, c=0,r=0,k=0;
        cin >> m >> n >> x;
         
        c=ceil(x/m);
        k=x/m;
        r=k-m;

        cout<<"row: "<<r<<endl;
        cout<<"columen : "<<c<<endl;


          
    }
        return 0;
}
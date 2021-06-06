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
        long long x,y,z,x2,y2,z2;
        cin >> x>>y>>z;
        x2=x*x;
        y2=y*y;
        z2=z*z;
        if((x2==(y2+z2))||(y2==(z2+x2))||(z2==(x2+y2)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        
    }
    return 0;
}
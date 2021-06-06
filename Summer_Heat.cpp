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
        long long x,y,X,Y;
        cin >> x>>y>>X>>Y;

        cout<<(X/x)+(Y/y)<<endl;
    }
    return 0;
}
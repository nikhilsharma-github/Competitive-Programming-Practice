#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        long long x,m,d,ub,cml;
        cin >> x>>m>>d;
        ub=x+d;
        cml=x*m;
       cout<<min(ub,cml)<<endl;

        
    }
    return 0;
}
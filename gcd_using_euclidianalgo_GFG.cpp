#include <bits/stdc++.h>
using namespace std;
int gcd(int y,int x){
    if(y==0)
    return x;
    else
       return gcd(x%y,y);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n,m;
        cin >> n>>m;
        cout<<"gcd of "<<n<<" and "<<m<<" is "<<gcd(n,m)<<endl;
    }
    return 0;
}
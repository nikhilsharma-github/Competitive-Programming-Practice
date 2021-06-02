#include <bits/stdc++.h>
using namespace std;
// long long fact(long long f){

//      long long res=0;
//     for(int i=1;i<=f;i++)
//     {
//         res=res*i;
//     }
//     return res;

// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c;
    cin >> a >> b >> c;

    //   long long comb=fact()
    if (a == b || b == c || c == a || (a == b && b == c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long factnumber(long long n)
{

    if (n == 1)
        return 1;

    return n * factnumber(n - 1);
}
long long factnumberusingtailrecursion(long long n, long long c)
{

    if (n == 1||n==0)
    return c;
      
      c=c*n;
//    return  factnumberusingtailrecursion(n-1, c*n);
      factnumberusingtailrecursion(n-1, c);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        cout<<" testcase : "<<test<<endl;
        long long n;
        cin >> n;
        cout << " printing factorial of " << n << " using recursion : " << endl;
        cout << factnumber(n);
        cout << endl;
        cout << " printing factorial of " << n << " using TAIL recursion : " << endl;
      cout<<  factnumberusingtailrecursion(n, 1);
        cout << endl;
        cout<<" hella"<<endl;
    }
    return 0;
}
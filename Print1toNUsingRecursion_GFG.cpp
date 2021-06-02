#include <bits/stdc++.h>
using namespace std;
void printnumber(long long n)
{

    if (n == 0)
        return;

    printnumber(n - 1);
    cout << n << " ";
}
void printnumberusingtailrecursion(long long n,long long c)
{

    if (n==0)
        return;
     

    cout << c << " ";
    printnumberusingtailrecursion(n-1,c+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << " printing from 1 to " << n << " using recursion : " << endl;
        printnumber(n);
        cout<<endl;
        cout << " printing from 1 to " << n << " using TAIL recursion : " << endl;
        printnumberusingtailrecursion(n,1);
        cout << endl;
    }
    return 0;
}
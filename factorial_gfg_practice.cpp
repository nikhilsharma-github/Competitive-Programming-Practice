#include <bits/stdc++.h>

using namespace std;

long long fact(long long n)
{
    // long long fact=1;
       if(n==0)
       return 1;
       return n*fact(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cout << "given no: " << endl;
        cin >> n;
        cout << n << endl;
        cout << "factorial is : " << endl;
        cout << fact(n) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// int s=0;
int count(long long n,int s=0)
{
// static int s=0;
    
    // cout << "Current S value: " << s << endl;
    if ((n == 0) && (s == 0))
    {
        // cout << "Number has one digit and its 0" << endl;
        return 1;
    }
    else if ((n == 0) && (s > 0))
    {
        // cout << "number has more than 1 digit and its returning 0 at last " << endl;
        return 0;
    }

     s++;

    return (1 + count(n / 10,s));
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
        cout << " no of digits in number " << n << " is : " << endl
             << count(n) << endl;
    }
    return 0;
}
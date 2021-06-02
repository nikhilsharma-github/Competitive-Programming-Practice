#include <bits/stdc++.h>
using namespace std;
void binary(long long n)
{

    if (n == 0)
        return ;

    cout << n % 2;
    n = n / 2;
    binary(n);
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
        cout<<endl;
        cout << "Binary Form of the number " << n << " is : " << endl;
        binary(n);
    }
    return 0;
}
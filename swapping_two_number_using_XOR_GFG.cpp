#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, m;
        cin >> n >> m;

        cout << "numbers are : " << n << " and " << m << endl;
        cout << "bitwise presentation: " << endl;
        cout << "n: " << std::bitset<sizeof(int) * 8>(n) << endl;
        cout << "m: " << std::bitset<sizeof(int) * 8>(m) << endl;

        n = n ^ m;
        m = n ^ m;
        n = n ^ m;
        cout << " after swapping : " << endl;
        cout << "numbers are : " << n << " and " << m << endl;
        cout << "n: " << std::bitset<sizeof(int) * 8>(n) << endl;
        cout << "m: " << std::bitset<sizeof(int) * 8>(m) << endl;
    }
    return 0;
}
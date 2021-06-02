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
        long long n, k;
        cin >> n >> k;
        cout << "number : " << n << endl;
        cout << " bitwise presentation :" << endl;

        cout << std::bitset<8>(n) << endl;

        cout << "setting " << k << " th bit : " << endl;
        // cout << "setting " << k << " th bit : " << endl;

        long long temp = n | (1 << (k - 1));
        //  cout<<
        cout << " bitwise presentation :" << endl;
        cout << std::bitset<8>(temp) << endl;

        cout << " UN setting " << k << " th bit : " << endl;
        temp = 1 << (k - 1);
        temp = ~temp;
        temp = temp & n;

        cout << " bitwise presentation :" << endl;
        cout << std::bitset<8>(temp) << endl;

        cout << "checking kth bit is set or not: " << endl;
        cout << std::bitset<8>(n) << endl;

        if (n & (1 << (k - 1)))
            cout << " set " << endl;
        else
            cout << "not set " << endl;

        cout << " log base 2 of the given number : " << n << endl;

        int res = 0, t;
        t = n;

        // while(t){

        //     res++;
        //     t=t>>1;

        // }

        while (t >>= 1)
        {
            res++;
        }
        cout << " LOG2(" << n << ") is " << res << endl;

        cout << " toggling " << k <<" th bit of number : " << n << endl;

        int g=1<<(k-1);
        g=g^n;
        cout << "after toggling kth bit of number : "<< std::bitset<8>(n)  << endl;
        cout << std::bitset<8>(g) << endl;
        
    }
    return 0;
}
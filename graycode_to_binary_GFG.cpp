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
        long long n, g,res;
        cin >> n;
        g = n;
        res=g;

        cout << std::bitset<8>(n);

        while (n)
        {
            cout<<endl;
            n = n >> 1;
        cout <<"binary n : " <<std::bitset<8>(n)<<endl;

            res=res^n;
        cout <<"binary res : " <<std::bitset<8>(res)<<endl;


        }

        cout <<"binary ressss : "<< std::bitset<8>(res)<<endl;
        cout<<res<<endl;
    }
    return 0;
}
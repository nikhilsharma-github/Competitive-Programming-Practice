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

        int n, m;
        cin >> n >> m;

        int i = 0;
        // Your code here
        cout << "TESTCASE : " << test << endl;
        cout << "values are  : " << m << " and " << n << endl;
       /*
       
        cout << sizeof(int) << endl;
        for (i = 1; i <= sizeof(int) * 8; i++)
        {

            cout << "current m and n is : " << m << " " << n << endl;
            cout << "bitwise m: " << std::bitset<sizeof(int) * 8>(m) << " bitwise n: " << std::bitset<sizeof(int) * 8>(n) << endl;
            if ((((m & 1) != 0) && ((n & 1) == 0)) || (((m & 1) == 0) && ((n & 1) != 0)))
            {
                cout << "found at index : " << i << endl
                     << endl;
                break;
            }
            else
            {
                n = n >> 1;
                m = m >> 1;
            }
        }

        if (i > sizeof(int) * 8)
            cout << "Not possible" << endl;
                                           
    */
        int x = (m ^ n);
        cout << "TRYING O(1) algo here : " << endl;
        cout << "bitwise m: " << std::bitset<sizeof(int) * 8>(m) << " bitwise n: " << std::bitset<sizeof(int) * 8>(n) << endl;
        cout << "XOR OF NUMBERS : " << std::bitset<sizeof(int) * 8>(x) << endl;

        int comp=x;
        cout<<"compt : "<<comp<<endl;
                comp=(~comp)+1;

                comp=(comp&x);
        cout<<"compt1 : "<<comp<<endl;
        cout<<log2(comp)+1<<endl;
    }
    return 0;
}
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
        long double loc, ser, dis, x;
        long long u=loc;
        cin >> loc >> ser;
        // cout << "loc : " << loc << " ser :" << ser << endl;

        dis = ceil(loc / ser);

        // cout << " max  distance is : " << dis << endl;
        long double h = dis - floor(loc / ser);

        int a;
        a = (loc / dis);
        // cout << " pairs with min equal distance " << dis << " between them: " << a << endl;

        x = 2 * a - ser;
        //   x=x/2;

        if ((u % 2) != 0)
            x = x + 1;

        if (loc == ser)
        {
            dis = 1;
            x = loc;
        }
        

        cout << dis << " " << x << endl;
    }
    return 0;
}
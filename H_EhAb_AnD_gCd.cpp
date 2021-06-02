#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
       return gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n, g, l,flag=1;
        cin >> n;

        for (int i = 1; i <= n / 2; i++)
        {
            if(flag==6)
            break;

            for (int j = 1; j <= n / 2; j++)
            {
                g = gcd(i, j);
                l = (i * j) / g;

                if (g + l == n)
                {
                    cout << i << " " << j << endl;
                    flag=6;
                    break;
                }
            }

        }
        
    }
    return 0;
}
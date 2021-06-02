#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int test;
    cin >> test;
    // fflush(stdout);
    while (test--)
    {
        int n = 0, g = 1;
        for (int i = 1; i <= 2000; i++)
        {
            printf("%d\n", i * i);
            fflush(stdout);
            cin >> n;
            if (n == 1)
            {
                break;
            }
            else if (n == 0)
                continue;
            else if (n == -1)
            {
                return 0;
            }
        }
    }

    return 0;
}
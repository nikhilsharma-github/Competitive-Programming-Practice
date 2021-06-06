#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;

    long long n, sarja = 0, dima = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int l = 0, r = n - 1, turn = 1;
    while (l <= r)
    {
        // deb(l);
        // deb(r);
        // deb(turn);
        if (turn == 1)
        {

            if (a[l] >= a[r])
            {
                sarja=sarja+a[l];
                l++;
            }
            else if (a[r] > a[l])
            {
                sarja=sarja+a[r];
                
                r--;
            }
        }
        else if (turn == 0)
        {

            if (a[l] >= a[r])
            {
                dima=dima+a[l];
                l++;
            }
            else if (a[r] > a[l])
            {
                dima=dima+a[r];
                
                r--;
            }
        }
        // deb(sarja);
        // deb(dima);
        turn = 1 - turn;
    }

    cout<<sarja<<" "<<dima<<endl;

    return 0;
}
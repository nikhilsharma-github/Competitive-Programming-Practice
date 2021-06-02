#include <bits/stdc++.h>
using namespace std;
int soe(long long n)
{

    vector<bool> v(n + 1, true);
    // bool v[n+1];
    // fill(v,v+n+1,true);

    if (n <= 1)
    {
        cout << "not possible" << endl;
        return 0;
    }
    else
    {

        for (int i = 2; i <= sqrt(n); i++)
        {
           
            if (v[i]==true)
            {
                cout<<i<<" is prime"<<endl;
                for (int j = 2 * i; j <= n; j = j + i)
                {
                    cout<<j<<" is not prime now"<<endl;
                    v[j] = false;
                }
            }
        }
        cout << "prime no.s upto " << n << " are: " << endl;
        for (int i = 2; i <= n; i++)
        {
            if (v[i]==true)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
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
        soe(n);
    }
    return 0;
}
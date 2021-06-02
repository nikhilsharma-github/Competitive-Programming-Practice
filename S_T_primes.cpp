#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n, long long l)
{
    bool prime[n+1];
    if (l == -2)
    {

      prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
    }
    if(l>-2)
    for (int p = 2; p <= n; p++)
    {
        if (prime[p]&&pow(prime[p],2)==l)
        {
            cout <<"YES for "<<l<<endl;

        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, t, m = 0;
    cin >> n;
    vector<long long> v;

    // cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
        m = max(t, m);
    }
    // cout<<m<<endl;
    SieveOfEratosthenes(m, -2);

    for (int i = 0; i < n; i++)
    {
        t = v[i];
        SieveOfEratosthenes(m, t);
    }

    return 0;
}

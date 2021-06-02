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
        long long n,i;
        cin >> n;
        if (n == 1)
        {
            cout << "not prime" << endl;
            continue;
        }
        else if (n == 2 || n == 3)
        {
            cout << "prime" << endl;
            continue;
        }
        else if (n % 2 == 0 && n % 3 == 0)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        else
        {

            for (i = 5; i <= sqrt(n); i = i + 6)
            {
                if (n % i == 0 || (n % (i + 2) == 0))
                    cout << "Not prime" << endl;
            }
        }
        if(i>sqrt(n))
        cout<<"prime"<<endl;
    }
    return 0;
}
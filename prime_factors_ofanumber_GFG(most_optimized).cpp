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
        
        long long n;
        cin >> n;

        if (n == 1)
        {
            cout << "No prime factors" << endl;
            continue;
        }

        if (n % 2 == 0)
        {

            while (n % 2 == 0)
            {
                cout <<"2 ";
                n = n / 2;
            }
        }
        if (n % 3 == 0)
        {

            while (n % 3 == 0)
            {
                cout << "3 ";
                n = n / 3;
            }
        }
        if((n%2!=0)&&(n%2!=3)){

            for(int i=5;i<=sqrt(n);i=i+6)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        cout<<i<<" ";
                        n=n/i;
                    }
                }
               else if(n%(i+2)==0)
                {
                    while(n%(i+2)==0)
                    {
                        cout<<i+2<<" ";
                        n=n/(i+2);
                    }
                }
            }
        }
        if(n>3)
        cout<<n<<" "<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        n=n-1;
        int k = 2, h = 1;
        while (n>=k)
        {
            // cout<<"n is : "<<n<<" and  greater than "<<k<<endl;
            if (n >= k)
            {
                 
                h++;
                n = n - k;
                // cout<<" now n is : "<<n<<endl;
                // cout<<" new value of k : "<<k<<endl;
                // cout<<"height is : "<<h<<endl;
                k++;
            }
            // cout<<n<<endl;
        }
            cout << h << endl;
    }
    return 0;
}
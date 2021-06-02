#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        long long n, j, pos = 0;
        cin >> n;
        // cout<<"number is : "<<n<<endl;
        float k=(float)n/2;

        // cout<<k<<endl;
        // j = n - 1;
        if (n == 1)
            cout << "1" << endl;
        else{
            // cout<<"k= "<<k<<endl;
            // cout<<"ciel k:"<<endl;
             cout<<ceil(k)<<endl;
        //     for (int i = 1; i < n; i++)
        //     {
        //         if (i == (j - 1))
        //         {
        //             pos = i;
        //             break;
        //         }
        //         j--;
        //     }
        //   cout<<pos<<endl;
        }
    }
    return 0;
}
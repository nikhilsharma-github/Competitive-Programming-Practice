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
        long long n,j=0;
        cin >> n;
cout<<" number is : "<<n<<endl;
cout<<std::bitset<8>(n)<<endl;
        int flag = 5;

        while (n)
        {

            //    cout<<" current no :"<<n<<endl;
            if (n%2!=0)
            {
                // cout << n << " is odd now " << endl;
                if (flag == 1)
                {
                    j = 1;
                    // cout << " found 2 consecutive 1s here " << endl;
                    break;
                }
                else
                {
                    // cout << " put flag to 1 here" << endl;
                    flag = 1;
                }
            }
            else
            {
                // cout << " no is even so changed flag to 0" << endl;
                flag = 0;
            }
                n = n >> 1;
        }
        if (j == 0)
            // cout << "sparse" << endl;
        else if (j == 1)
            // cout << "NOT sparse" << endl;
    }
    return 0;
}
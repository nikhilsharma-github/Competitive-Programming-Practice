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
        int c = 0, msb = 0;
        cin >> c;
        bitset<32> arr(c);
        for (int i = 31; i >=0; i--)
        {
            // cout << arr[i];
            if (arr[i] == 1)
            {
                msb = i;
                break;
            }
        }

        int a[msb + 1] = {0};
        int b[msb + 1] = {0};

        a[0] = 1;
        b[0] = 0;

        for (int i = msb-1; i>=0; i--)
        {
            
            if (arr[i] == 1)
            {
                a[msb-i] = 0;
                b[msb-i] = 1;
            }
            else if (arr[i] == 0)
            {
                a[msb-i] = 1, b[msb-i] = 1;
            }
        }
        // cout<<endl;
        // for(int i=msb;i>0;i--){
        //     cout<<a[i];
        // }
        // cout<<endl;
        // for(int i=msb;i>0;i--){
        //     cout<<b[i];
        // }
        // cout<<endl;
    long long s1=0,s2=0;
        for(int i=0;i<=msb;i++){

            s1=s1+pow(2,i)*a[msb-i];
            s2=s2+pow(2,i)*b[msb-i];

        }
        cout<<s1*s2<<endl;
    }
    return 0;
}
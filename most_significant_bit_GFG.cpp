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
        cout << "number is : " << n << endl;
        cout << "bitwise presentation: " << endl;
        cout << "n: " << std::bitset<sizeof(int) * 8>(n) << endl;

        
        int msb=log2(n);
    
        long long msbp= 1<<(msb);
        if(msb==0)
        msbp=0;

        cout << "bitwise presentation of msb number : " << endl;
        cout << "n: " << std::bitset<sizeof(int) * 8>(msbp) << endl;

        cout<<"msb : "<<msbp<<endl;
         

    }
    return 0;
}
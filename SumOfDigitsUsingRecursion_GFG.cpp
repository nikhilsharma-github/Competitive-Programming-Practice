#include <bits/stdc++.h>
using namespace std;

long long sumOfDigits(long long n){

      if(n==0)
      return 0;
       
       int d=n%10;;
    //   return d+sumOfDigits(n/10);
      return n%10+sumOfDigits(n/10);

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
        cout << " sum of digits of the number " << n << " is : " << sumOfDigits(n) << endl;
    }
    return 0;
}
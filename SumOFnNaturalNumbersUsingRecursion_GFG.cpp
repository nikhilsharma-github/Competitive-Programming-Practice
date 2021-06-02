#include <bits/stdc++.h>
using namespace std;
long long sum(long long n,long long c)
{
    // int c=0;
   if(n==0)
   return c;

    
     return sum(n-1,c+n);
 
   
//    if(n==1||n==0)
//    return c;
    
//    return n+sum(n-1);

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
        cout << " sum upto " << n << " is : " << endl;
        cout << " using formula : " << (n * (n + 1)) / 2 << endl;
        cout << " using recursion: " << sum(n,0) << endl;
    }
    return 0;
}
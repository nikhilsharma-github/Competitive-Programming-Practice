#include <bits/stdc++.h>
using namespace std;
void printnumber(long long n){
      
      if(n==0)
      return ;

      cout<<n<<" ";
      printnumber(n-1);
    //   n--;
    //   printnumber(n);

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
        cout << " printing from " << n << " to 1 using recursion : " << endl;
        printnumber(n);
        cout<<endl;
    }
    return 0;
}
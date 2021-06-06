#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {  

   long long D,d,P,Q,lastday=0;
   long double money=0,money1=0;
   cin>>D>>d>>P>>Q;
   lastday=P+(d-1)/Q;
   cout<<" money at day "<<d<<" will be : "<<lastday<<endl;
   money=((D-1)/2)+(2*P+(D-2)/Q);
   cout<<"sum of Money from day 1 to day "<<d<<" is : "<<money<<endl;

  money1=money+(D-d)*lastday;
  cout<<"sum of  money from day "<<d+1<<" to day : "<<D<<" will be : "<<money1<<endl;

cout<<"FINAL MOENY: "<<endl;
 cout<<money+money1<<endl;  

    }
    return 0;
}
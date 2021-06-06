#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long test = 1;
  cin >> test;
  while (test--)
  {
    cout<<endl;
cout<<"TESTCASE : "<<test+2<<endl;
    long long D, d, P, Q, lastday = 0, rate = 0;
    long long money = 0, money1 = 0;
    cin >> D >> d >> P >> Q;

cout<<"P : "<<P<<endl;
cout<<"Q : "<<Q<<endl;
cout<<"d : "<<d<<endl;
cout<<"D : "<<D<<endl;

    //  LOGIC FOR 15 points ONLY
    // for (int i = 1; i <= D; i++)
    // {
    //   if((i-1)%d==0)
    //   {
    //       rate=P+Q*(i-1)/d;

    //   } 
    //   money=money+rate;
    
    // }

    // LOGIC FOR 100 POINTS Underwork
int ld=0;
    for (int i = 1; i <= ((D/d)*d)+1; i=i+d)
    {
      
      
      cout<<" i is : "<<i<<endl;

           rate=P+Q*(i-1)/d;
           cout<<"multiply factor of Q : "<<(i-1)/d<<endl;
        cout<<"current rate is : "<<rate<<endl;

      money= money+rate*d;
      cout<<"money from day "<<i<<" to day "<<i+d-1<<" is : "<<money<<endl;

       ld=i;
    }
     
     cout<<"rate at last : "<<rate<<endl;
    money=money+rate*((D/d)*d);

    cout << money << endl;
  }
    return 0;   
}
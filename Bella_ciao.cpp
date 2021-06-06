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

    long long D, d, P, Q, lastday = 0, rate = 0;
    long double money = 0, money1 = 0;
    cin >> D >> d >> P >> Q;

    for (int i = 1; i <= D; i = i * d)
    {

      money = money + P + i * Q;
    }
    cout << money << endl;
    return 0;
  }
#include <bits/stdc++.h>
using namespace std;

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;
   cin.ignore();

   while (t--)
   {
      char mtz, ntz1, ntz2, one = '1', zero = '0';
      int mth = 0, mtm = 0;
      int nth1 = 0, ntm1 = 0;
      int nth2 = 0, ntm2 = 0;
      string mytime;
      string ans = "";
      getline(cin, mytime);

      mtz = mytime[6];

      mth = (mytime[0] - '0') * 10 + 1 * (mytime[1] - '0');
      mtm = (mytime[3] - '0') * 10 + 1 * (mytime[4] - '0');
      if (mtz == 'P' && mth != 12)
         mth = 12 + mth;
      if (mth == 12 && mtz == 'A')
         mth = 0;

      // cout << " 24 hour format of maintime : " << mth << ":" << mtm << " " << mtz << endl;
      long long n;
      cin >> n;
      cin.ignore();
      while (n--)
      {
         string friendtime;
         getline(cin, friendtime);
         ntz1 = friendtime[6];

         nth1 = (friendtime[0] - '0') * 10 + 1 * (friendtime[1] - '0');
         ntm1 = (friendtime[3] - '0') * 10 + 1 * (friendtime[4] - '0');

         if (ntz1 == 'P' && nth1 != 12)
            nth1 = nth1 + 12;

         if (nth1 == 12 && ntz1 == 'A')
            nth1 = 0;

         // cout << " 24 hour format of start time : " << nth1 << ":" << ntm1 << " " << ntz1 << endl;

         ntz2 = friendtime[15];

         nth2 = (friendtime[9] - '0') * 10 + 1 * (friendtime[10] - '0');
         ntm2 = (friendtime[12] - '0') * 10 + 1 * (friendtime[13] - '0');
         if (ntz2 == 'P' && nth2 != 12)
            nth2 = nth2 + 12;

         if (nth2 == 12 && ntz2 == 'A')
            nth2 = 0;

         // cout << " 24 hour format of end time : " << nth2 << ":" << ntm2 << " " << ntz2 << endl;

        if((nth1> mth)||(nth2< mth)) {ans.push_back('0');}
            else if(nth1 == mth && ntm1> mtm) ans.push_back('0');
            else if(nth2 == mth && ntm2< mtm) ans.push_back('0');
            else ans.push_back('1');
         
      }
         cout << ans << endl;
   }
      return 0;
   }
#include <bits/stdc++.h>
using namespace std;

int sol(string s)
{
  int ans = 0;
  int len = s.length();
  cout<<"Lenght is : "<<len<<endl;
  if (len < 3){
    cout<<"Length is smaller than 3 so returned 0"<<endl;
    return 0;

  }
  else
  {
    cout<<"Lenght is greater than 3"<<endl;
    for (int i = 0; i <= len - 3; i++)
    {
      int x = (int)s[i], y = (int)s[i + 1], z = (int)s[i + 2];
      cout<<"index "<<i<<" is : "<<x<<"or char: "<<s[i]<<endl;
      cout<<"index "<<i+1<<" is : "<<y<<"or char: "<<s[i+1]<<endl;
      cout<<"index "<<i+2<<" is : "<<z<<"or char: "<<s[i+2]<<endl;
      if ((x != y) && (y != z) && (z != x)){
        ans++;
            cout<<" all are diff so increased ans"<<endl;
      }
      cout<<"Current ans is : "<<ans<<endl;

    }
    return ans;
  }
}
  int main()
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
      string s;
      getline(cin,s);

      sol(s);
    }
    return 0;
  }
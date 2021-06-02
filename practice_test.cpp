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
          int r=0;
          cin>>r;
          cout<<"given number is : "<<r<<endl;

          cout<<"METHOD 1 "<<endl;
          cout<<"bitwise : "<<std::bitset<8>(r)<<endl;
          cout<<"one's c : "<<std::bitset<8>(~r)<<endl;
          int c1=(~r)+1;
          cout<<"two's c : "<<std::bitset<8>(c1)<<endl;
                 
         c1=(c1&r);
         cout<<"number showing leftmost set bit:"<<endl;
          cout<<"no      : "<<std::bitset<8>(c1)<<endl;
          cout<<"leftmost set bit : "<<log2(c1)+1<<endl;
          
          cout<<"METHOD 2 "<<endl;
          cout<<"bitwise : "<<std::bitset<8>(r)<<endl;
          cout<<"minus 1 : "<<std::bitset<8>(r-1)<<endl;
           c1=(~(r-1));
          cout<<"its com : "<<std::bitset<8>(c1)<<endl;
                 
         c1=(c1&r);
         cout<<"number showing leftmost set bit:"<<endl;
          cout<<"no      : "<<std::bitset<8>(c1)<<endl;
          cout<<"leftmost set bit : "<<log2(c1)+1<<endl;
    }
    return 0;
}
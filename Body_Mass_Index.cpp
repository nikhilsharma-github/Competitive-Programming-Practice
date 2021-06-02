#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n, h,bmi=0;
        cin >> n >> h;

        h=h*h;
          bmi=n/h;
          if(bmi<=18)
          cout<<"1"<<endl;
          else if(bmi>=19&&bmi<=24)
          cout<<"2"<<endl;
          else if(bmi>=25&&bmi<=29)
          cout<<"3"<<endl;
          else if(bmi>=30)
          cout<<"4"<<endl;
    }
    return 0;
}
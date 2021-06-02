// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void calculate(long long unsigned int);

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//    short unsigned int day,month,year,day1,month1,year1,daydiff,mondiff,yeardiff;

//    cin>>day1>>month1>>year1;
//    cin>>day>>month>>year;

//    daydiff=fabs(day1-day);
//    mondiff=fabs(month1-month);
//    yeardiff=fabs(year1-year);

// //    cout<<daydiff<<" "<<mondiff<<" "<<yeardiff<<endl;

//  long long unsigned int totaldays1,totaldays,totaldaysdiff;
//    totaldays1=day1+month1*31+year1*365;
//    totaldays=day+month*31+year*365;

//    totaldaysdiff=totaldays1-totaldays;

// //    cout<<totaldaysdiff;

//    calculate(totaldaysdiff);

//     return 0;
// }
// void calculate(long long unsigned int ttd)
// {
//   int d=0,m=0,y=0;
//     while(ttd){
//         if(ttd>=335)
//         {
//             y++;
//             ttd=ttd-365;
//         }
//        else if(ttd>=31)
//         {
//             m++;
//             ttd=ttd-31;
//         }
//         else if(ttd>0)
//         {
//             d++;
//             ttd=ttd-1;
//         }
//     }
// //    cout<<d<<ends<<m<<ends<<y;
//     short unsigned int ans=d*15+m*500+y*10000;
//     cout<<ans;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short unsigned int day, month, year, day1, month1, year1, daydiff, mondiff, yeardiff;

    cin >> day1 >> month1 >> year1;
    cin >> day >> month >> year;

    int ans = 0;
    if (year1 == year)
    {
        if (month1 == month)
        {
            if (day1 == day)
                cout << "0";
            else
            {
                cout << 15* (day1 - day);
            }
        }
        else{
              if(month1>month)
              cout<<500*(month1-month);
              else
              {
                  cout<<"0";
              }
              

        }
    }
    else{

        if(year1<year)
        cout<<"0";
        else
        {
            cout<<"10000";
        }
        
    }
    return 0;
}
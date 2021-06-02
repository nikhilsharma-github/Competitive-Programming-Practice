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
       unsigned long long  one = 20, two = 36, three = 51, four = 60,m=(pow(10,9)+7);
      unsigned  long long n, td = 0, res = 0, k = 0, ext1 = 0,tempp=0;
        cin >> n;
        td = n % 4;
        float i = (float)n / 4;
       unsigned long long bdl=ceil(i);
    
        // cout << "bdl is : " << bdl << endl;
        // bdl = bdl - 1;

        if (td == 1)
            k = one;
        if (td == 2)
            k = two;
        if (td == 3)
            k = three;
        if (td == 0)
            k = four;

        if (n <= 4)
        {
            if (n == 1)
                res = one;
            else if (n == 2)
                res = two;
            else if (n == 3)
                res = three;
            else if (n == 4)
                res = four;
        }
        else if (n > 4 && n <= 8)
        {
            if (td != 0)
            {
                res = 11 * td + 15 * (4 - td) + k;
                

                ext1 = res;
            }
            else
            {
                res = 44 + 15 * 4;
                ext1 = res;
            }
        }
        else if (n > 8)
        {

            if (td != 0)
            {
                // res = 11 * td + 15 * (4 - td) + k;

                res= (11%m)*(td%m);
                res=res%m;
                tempp=(15%m)*(4-td)%m;
                tempp=tempp%m;
                res=res+tempp+k;
                ext1 = res;
            }
            else
            {
                res = 44 + 15 * 4;
                ext1 = res;
            }
            // cout<<"here wie o"<<endl;
            // cout<<"in greater than 8"<<endl;
            
            // res = ext1 + (bdl-2)*44;

             res= (44%m)*((bdl-2)%m);
                res=res%m;
                res=res+ext1;
            // cout<<"res : "<<res<<endl;
            // cout<<"ext1: "<<ext1<<endl;
        }

        cout << res << endl;
    }
    return 0;
}
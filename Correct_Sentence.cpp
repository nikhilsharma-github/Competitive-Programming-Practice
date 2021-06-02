#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    int y = test;
    while (test--)
    {
        static int q=0;
        // cout << "TESTCASE : " << y - test << endl;
        bool check = true;
        char kase = 'o';
        string t;
        long long n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            q=i;
            // cout<<"word number "<<i+1<<" of testcase "<<y-test<<endl;
            cin >> t;
            // cout << "word is : " << t << endl;
            int h = t[0];
            // cout << h << endl;

            if ((h >= 78) && (h <= 90))
            {
                kase = 'u';
                // cout << "first letter is uppercase" << endl;
            }
            else if (((h >= 65) && (h <= 77)) || ((h >= 110) && (h <= 122)))
            {
                kase = 'i';
                // cout << "case is invalid" << endl;
                check = false;
            }

            else if  ((h >= 97) && (h <= 109))
            {
                kase = 'l';
                // cout << "first letter is lowercase" << endl;
            }


            // cout<<"here looping 2 starts"<<endl;

            if (kase == 'u')
            {

            //  cout<<" 1st case is upper and comes under looping"<<endl;
                for (int i = 1; t[i] != '\0'; i++)

                {
                    int h = t[i];
                    if (!((h >= 78) && (h <= 90)))
                    {
                        // cout << "first was upper, some rest was lower ,so invalid" << endl;
                        check = false;
                        break;
                    }
                }
            }
            else if (kase == 'l')
            {
            //  cout<<" 1st case is lower and comes under looping"<<endl;

                for (int i = 1; t[i] != '\0'; i++)
                {
                    int h = t[i];
                    
                    if (!((h >= 97) && (h <= 109)))
                    {
                        // cout << "first was lower, some rest was upper ,so invalid" << endl;
                        check = false;
                        break;
                    }
                }
            }

            if (check == true&&(q+1==n))
            {
                // cout << "FINAL ANS IS : YESSSS" << endl;
                cout<<"YES"<<endl;
                    
            }
            else if (check == false&&(q+1==n))
            {
                // cout << "FINAL ANS IS : NOOOO" << endl;
                cout<<"NO"<<endl;
                break;

            }
        
        }
    }

    return 0;
}
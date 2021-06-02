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
        int n, bount = 0, flag = 0, r = 0;
        cin >> n;
        vector<int> v;
        v.push_back(0);
        //added 0 to 1st index for conviniednc
        for (int i = 1; i <= n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        // cout<<"given array : "<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        sort(v.begin(), v.end());

        for (int i = 1; i <= n; i++)
        {
            //checking for the values by their index values
            if (v[i] > i)
            {
                cout << "Second" << endl;
                // cout<<" ENDED TESTCASE HERE"<<endl;
                flag = 1;
                break;
            }
            else
            {
                //incrementing values of counttter
                r = i - v[i];
                bount = bount + r;
            }
        }
        // cout<<"count : "<<bount<<endl;
        if (flag == 0)
        {

            if (bount % 2 == 0)
                cout << "Second" << endl;
            else
            {
                cout << "First" << endl;
            }
        }
    }
    return 0;
}
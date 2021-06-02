#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    static long long fs = 0, r;
    while (test--)
    {
        long long s, ps = 0;
        cin >> s;
        // cout<<" no of seasons : "<<s<<endl;
        long long is[s];
        // cout<<" intro song value : \n";
        for (int i = 0; i < s; i++)
        {
            cin >> is[i];
            // cout<<is[i]<<" ";
        }
        // cout<<endl;
        static long ansf;
        for (r = 0; r < s; r++)
        {
            // cout<<" calculations for season "<<r+1<<endl;
            long k = is[r];
            // cout<<" intro song value : "<<k<<endl;
            long e;
            cin >> e;
            // cout<<" no of episodes : "<<e<<endl;
            long ep[e];
            // cout<<" episodes value are : \n";
            for (int i = 0; i < e; i++)
            {
                cin >> ep[i];
                // cout<<ep[i]<<" ";

            }
            // cout<<endl;
            ansf = ansf + ep[0];
            // cout<<" sum with 1st episode full : "<<ansf<<endl;

            for (int i = 1; i < e; i++)
            {
                // cout<<" here erasing intro song value "<<k<<" from episode no "<<i<<endl;
                ansf = ansf + ep[i] - k;
                // cout<<" sum till now : "<<ansf<<endl;
            }
            // cout<<"time sum upto season "<<r+1<<" is : "<<ansf<<endl;
        }
        cout << ansf << endl;
        ansf = 0;
    }
    return 0;
}

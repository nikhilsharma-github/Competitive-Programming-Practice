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
        // cout << " TEST CASE : " << test + 1 << endl;
        set<int> s;
        vector<int> v;
        long long n, m, val = 0;
        cin >> n >> m;
        // cout << " people : " << n << " topics: " << m << endl;

        // cout<<n<<m;
        // cout << " topics are :" << endl;
        for (int i = 1; i <= n; i++)
        {
            cin >> val;
            s.insert(val);
            // cout << val << " ";
        }
        // cout << endl;
        if (n == 1 && m == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        // cout << "values in set: " << endl;

        for (auto it = s.begin(); it != s.end(); it++)
        {
            // cout << (*it) << endl;
            v.push_back(*it);
        }

        // cout << " unique values in array : " << endl;
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";
        // cout << endl;


        int i,vs=v.size();
        if(v[vs-1]<m)
        cout<<"Yes"<<endl;
        else{

            for(i=0;i<vs;i++)
            {
                if(v[i]!=(i+1))
                {
                    cout<<"Yes"<<endl;
                    break;
                }
            }

            if(i==vs)
            cout<<"No"<<endl;
        }
    }
    return 0;
}
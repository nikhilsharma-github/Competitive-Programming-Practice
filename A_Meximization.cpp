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
        int n, t;
        cin >> n;
        //taking inputs
        vector<int> v, r, k;
        set<int> s;                 // using sets to avoid duplicate element
        for (int i = 0; i < n; i++) //taking input
        {
            cin >> t;
            v.push_back(t);
        }
        for (int i = 1; i < n; i++) //pushing duplicate values to end in vector r
        {
            if (v[i - 1] == v[i])
            {
                r.push_back(v[i]);
                //  cout<<"duplicate element is : "<<v[i]<<endl;
            }
        }
        sort(v.begin(), v.end()); //sorting array
        for (int i = 0; i < n; i++)
        {
            s.insert(v[i]); //pushing only unique values to set
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            //  auto *it=s.back();
            int y = (*it);
            k.push_back(y); // pushing the values of set to ans array
        }
        for (int i = 0; i < r.size(); i++)
        {

            k.push_back(r[i]); // pushing rest of the values to ans array
        }
        for (int i = 0; i < k.size(); i++)
        {
            //printing ans here
            cout << k[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
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
     vector<  pair<int,int>> h;
        int n;
        cin >> n;

        int a[n], b[n],c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            c[i]=a[i];
        }
        sort(b, b + n, greater<int>());

        int t = 1;
        for (int i = 0; i < n; i++)
        {
             int j=b[i];
            for (int i = 0; i < n; i++)
            {
                if (j == a[i])
                {
                    // cout << t << " ";
                    h.push_back( make_pair(t,j)); 
                    cout<<h[i].first<<" "<<h[i].second<<endl;
                    t++;
                    a[i] = 0;
                }
            }
        }
        cout << endl;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[j]==h[i].first)
                cout<<h[i].second<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
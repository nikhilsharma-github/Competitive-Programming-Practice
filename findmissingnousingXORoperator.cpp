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
        int n, one = 0, two = 0;
        cin >> n;
        vector<int> v;
        int t;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        for (int i = 1; i <=n; i++)
        {
            one = one ^ i;
        }
        cout<<" one : "<<one<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            two = two ^ v[i];
        }
        cout<<"two : "<<two<<endl;
        cout << "given list : " << endl;
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        // two = two ^ one;
        int three=one^two;
        cout << "missing no is : " << three << endl;

        int res=0;

        for(int i=0;i<n-1;i++)
        {
            cout<<"array value: "<<v[i]<<endl;
            cout<<"current index : "<<i<<endl;
            cout<<"current number : "<<i+1<<endl;
            cout<<"current res :"<<res<<endl;
              res=res^v[i];
            cout<<"xor after ^ with array val:"<<res<<endl;

              res=res^(i+1);
            cout<<"xor after ^ with index :"<<res<<endl;
            cout<<"new res :"<<res<<endl;
        }
         res=res^(n);
        

        cout << "MMMissing no is : " << res << endl;

    }
    return 0;
}
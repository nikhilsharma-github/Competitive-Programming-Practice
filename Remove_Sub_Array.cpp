#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> r(5,100);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
        int c = 0;
    int m = 1000;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            cout << "element : " << v[i] << " is smaller than : " << v[i - 1] << endl;
            int k = i, no = 0;
            int temp = v[i - 1];
            //    cout<<temp<<endl;
             c=0;
            while (v[k] <= temp)
            {
                cout << v[k] << " at index : " << k << endl;
                k++;
                c++;
                cout<<"value of c : "<<c<<endl;
            }
        }

        r.push_back(c);
    }
    r.shrink_to_fit();
    sort(r.begin(), r.end());
    int t;
    for( t=0;t<r.size();t++)
    {
        if(r[t]!=0&&r[t]!=100)
        {
        cout<<r[t];
         break;   
        }
         

    }
    if(t==r.size())
    cout<<"0";

// cout<<m;
    return 0;
}

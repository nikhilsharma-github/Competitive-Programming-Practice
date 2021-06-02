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
        int y=3;
        float k1, k2, k3, v, val = 9.58;
        cin >> k1 >> k2 >> k3 >> v;

        float res = k1 * k2 * k3 * v;

        // cout << " total product of res : " << res << endl;

        res = (100 / res);

        // cout << " time for 100 m race : " << res << endl;

        // cout << res << " " << val << endl;
        // cout<<" rounded off values from now upto 2 only: "<<endl;

        float k = (int)(res * 100 + .5);
        res = (float)k / 100;
        // cout <<"rounded of res : "<< res << endl;
    


        float t = fabs(res - val);

       k = (int)(t * 100 + .5);
        t = (float)k / 100;
        // cout << t << endl;
         

        // cout << "rounded off t: " << t << endl;
        // if (fabs(res - val) < std::numeric_limits<double>::epsilon())

        if((res-val)<0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        // cout << endl;
    }
    return 0;
}
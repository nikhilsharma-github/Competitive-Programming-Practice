#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long fb, a = 0, b = 1, temp, r;
    cin >> fb;

    vector<long long> fb1;
    fb1.push_back(0);
    fb1.push_back(1);
    for (int i = 2; i <= fb + 5; i++)
    {
        if (fb1[i - 1] == fb)
        {
            r = i - 1;
            break;
        }

        fb1.push_back(fb1[i - 2] + fb1[i - 1]);
        // auto it=fb1.back();
        // temp=(*it);
    }
    // for(int i=0;i<=fb1.size()-1;i++)
    // {
    //     // fb1.push_back(fb1[i-2]+fb1[i-1]);
    //     cout<<fb1[i]<<" ";
    // }
    if(fb==0)
    cout << "0 0 0" << endl;
    else if (fb == 1)
            cout
        << "0 0 1" << endl;
    else if (fb == 2)
            cout
        << "0 1 1" << endl;
        else if(fb==3)
        {
            cout<<" 1 1 1"<<endl;
        }
    else if (fb >= 3)
    {
        cout << fb1[r - 4] << " " << fb1[r - 3] << " " << fb1[r - 1] << endl;
    }

    return 0;
}
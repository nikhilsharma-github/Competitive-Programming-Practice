#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d1, d2, v1, v2, p, days = 0, vacsum = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    if (d1 == d2==0)
    {
        int vtemp = v1 + v2;
        while (vacsum < p)
        {
            days++;
            vacsum = vacsum + vtemp;
        }
    }
    else
    {
        pair<int, int> p1;
        pair<int, int> p2;
        // pair<int ,int> p2;
        if (d1 < d2)
        {
            p1 = make_pair(d1, v1);
            p2 = make_pair(d2, v2);
        }
        else
        {
            p1 = make_pair(d2, v2);
            p2 = make_pair(d1, v1);
        }

        while (vacsum < p)
        {

            days++;

            if (days < p1.first)
                continue;

            if (days < p2.first && days >= p1.first)
                vacsum = vacsum + p1.second;

            if (days >= p2.first)
                vacsum = vacsum + p1.second + p2.second;
        }
    }
    cout << days;
    return 0;
}
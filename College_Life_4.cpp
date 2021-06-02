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
        vector<pair<int, char>> p(3);
        int n, e, h, a, b, c, r = 0;
        cin >> n >> e >> h >> a >> b >> c;
        p[0].first = a;
        p[0].second = 'O';
        p[1].first = b;
        p[1].second = 'M';
        p[2].first = c;
        p[2].second = 'C';

        sort(p.begin(), p.end());
        cout << p[0].first << " " << p[0].second << endl;
        cout << p[1].first << " " << p[1].second << endl;
        cout << p[2].first << " " << p[2].second << endl;

        // while (r < n)
        // {
        // }
    }
    return 0;
}
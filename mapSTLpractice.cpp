#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, char> m;
    m.insert(pair<int, char>(2, 'a'));
    m.insert(pair<int, char>(5, 'c'));
    m.insert(pair<int, char>(6, 'v'));
    m.insert(pair<int, char>(7, 'd'));
    m.insert(pair<int, char>(12, 'r'));

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
     
    vector<int> k={1,2,3,4,5,2,3,2,1,3,4,4,4,5,5,1};

    map<int,int> c;
    for(int i=0;i<k.size();i++)
    {
        c[k[i]]++;
    }
    for (auto it = c.begin(); it != c.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}
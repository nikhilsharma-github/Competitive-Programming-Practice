#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    set <int> s;
    s.insert(10);
    s.insert(3);
    s.insert(1);
    s.insert(40);
    s.insert(0);
    s.insert(16);

    auto it=s.find(1);
    cout<<*it<<endl;
    return 0;
}
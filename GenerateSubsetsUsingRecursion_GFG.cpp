#include <bits/stdc++.h>
using namespace std;
void subsets(string s,string curr,int i)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }

    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        string s;
        cin>>s;
        cout<<" substrings of "<<s<<" are : "<<endl;
        subsets(s,"",0);
        cout<<endl;
    }
    return 0;
}
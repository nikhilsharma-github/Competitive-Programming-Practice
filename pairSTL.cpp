#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    pair<int,int> p(4,6);
    pair<char,float> p1=make_pair('r',6.32);
    pair<float,float> p2={4.23,65.32};

    pair<int,int> p3=p;
    
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,char> pa[5];

    for(int i=0;i<5;i++)
    {
        cin>>pa[i].first;
        cin>>pa[i].second;
        
    }
    cout<<" pair array below: "<<endl;
    for(int i=0;i<5;i++)
    {  
        
        cout<<pa[i].first<<" "<<pa[i].second<<"    ";

    }

    



    return 0;
}
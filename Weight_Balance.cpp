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
        int w1, w2, x1, x2, m,wi=0,mi=0,mf=0;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        wi=w2-w1;
        mi=x1*m;
        mf=x2*m;

        if(wi<=mf&&wi>=mi)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;


    }
    return 0;
}

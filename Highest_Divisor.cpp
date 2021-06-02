#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin >> n;
        int i=10;
        while(n%i!=0)
        {
            i--;    
        }
                cout << i << endl;
    
    return 0;
}
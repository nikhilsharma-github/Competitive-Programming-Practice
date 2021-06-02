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
        bool res=true;
        long long n;
        cin >> n;
        int a[n];

         for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << " GIVEN ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl
             << endl;
        
        for(int i=1;i<n;i++){

            if(a[i]<a[i-1])
            {
                res=false;
                break;
            }


        }

        if(res)
        cout<<"SORTED"<<endl;
        else
        {
            cout<<"NOT SORTED"<<endl;
        }
        
    }
    return 0;
}
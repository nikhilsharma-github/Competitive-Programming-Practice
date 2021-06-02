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
        cout<<endl;
        cout << " GIVEN ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl
             << endl;
        
        
        for(int i=0;i<(n/2);i++)
        {
            a[i]=(a[i]^a[n-i-1]);
            a[n-i-1]=(a[i]^a[n-i-1]);
            a[i]=(a[i]^a[n-i-1]);
        }
        cout<<"Using for loop "<<endl;
        cout << " SWAPPED ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        // WHILE LOOP SOLUTION

        int low=0,high=n-1;
        while(low<high){

            a[low]=a[high]^a[low];
            a[high]=a[high]^a[low];
            a[low]=a[high]^a[low];
            low++,high--;
        }
        cout<<"using while loop :"<<endl;
        cout << " SWAPPED ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
    }
    return 0;
}
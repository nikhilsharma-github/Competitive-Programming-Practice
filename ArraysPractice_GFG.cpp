#include <bits/stdc++.h>
using namespace std;

int insert(int a[], int n, int x, int pos)

{
    if (pos > n || pos < 1)
    {
        cout << "out of bound" << endl;
        return n;
    }

    else
    {

        // int temp=a[p-1];
        for (int i = n - 1; i >= pos - 1; i--)
        {

            a[i + 1] = a[i];
        }
        a[pos - 1] = x;

        return n + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int a[10] = {1, 2, 3, 4, 5};
    int n = 5;


        short int a=SHRT_MAX;
        int b =INT_MAX;
        // long int c=_MAX;
        long long int lli=INT_MAX;
        float f=INT_MAX;
        double d=INT_MAX;
        long double ld=INT_MAX;
        cout<< a<<endl;
        cout<< b<<endl;
        // cout<< c<<endl;
        cout<< lli<<endl;
        cout<< f<<endl;
        cout<< d<<endl;
    // while (1)
    // {
    //     int p, x;
    //     cout << "enter value" << endl;
    //     cin >> x;
    //     cout << "enter index" << endl;
    //     cin >> p;
    //     n = insert(a, n, x, p);

    //     cout << " new array is " << endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
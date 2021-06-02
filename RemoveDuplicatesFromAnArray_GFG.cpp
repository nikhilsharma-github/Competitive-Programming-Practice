#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesBest(int a[], int n)
{
    int res = 1;

    if (n == 1)
        return n;
    else
    {

          
        for (int i = 1; i < n; i++)
        {

            if (a[res-1] != a[i])
            {
               a[res]=a[i];
               res++;
            }
        }
        return res;
    }
}
int removeDuplicates(int a[], int n)
{

    if (n == 1)
        return n;
    else
    {
        int dup = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                a[i - 1] = INT_MIN;
                dup++;
            }
        }
        return n;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        bool res = true;
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

        // n = removeDuplicates(a, n);
        // vector<int> v;
        // for (int i = 0; i < n; i++)
        // {
        //      if(a[i]!=INT_MIN)
        //      v.push_back(a[i]);
        //     // cout << a[i] << " ";
        // }
        // cout<<"Using O(n) time complexity and O(n) auxillary space"<<endl;
        // cout << " Array after removing duplicates : " << endl;

        // for (int i = 0; i < v.size(); i++)
        // {
        //     //  if(a[i]!=INT_MIN)
        //     //  v.push_back(a[i]);
        //     cout << v[i] << " ";
        // }

        // cout << endl
        //      << endl;

        // Using O(n) and O(1) auxillary space

        n = removeDuplicatesBest(a, n);
       
        cout << " Array after removing duplicates : " << endl;

        for (int i = 0; i < n; i++)
        {
            //  if(a[i]!=INT_MIN)
            //  v.push_back(a[i]);
            cout << a[i] << " ";
        }

        cout << endl
             << endl;

    }
    return 0;
}
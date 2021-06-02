#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    cout<<"array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        cout<<" testcase "<<test+1<<endl;
        bool res = true;
        long long n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << endl;
        // cout << " GIVEN ARRAY IS : " << endl;
        print(a,n);
        cout << endl
             << endl;

        //  N^2 solution

        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == 0)
        //     {
        //         cout<<a[i]<<" is 0 here at "<<i<<endl;
        //         for (int j = i + 1; j < n; j++)
        //         {

        //             if (a[j] != 0)
        //             {
        //                 cout<<a[j]<<" is non zero at "<<j<<endl;
        //                 int temp = a[i];
        //                 a[i] = a[j];
        //                 a[j] = temp;
        //                 break;
        //             }
        //         }
        //         cout<<"updated array is "<<endl;
        //         print(a,n);
        //     }
        // }
        // cout << " array after moving 0s to the end: " << endl;
        // print(a,n);

        //    N complexity solution

        int index=0;
        for(int i=0;i<n;i++){

            if(a[i]!=0)
            {
                int temp=a[i];
                a[i]=a[index];
                a[index]=temp;
                index++;
            }
        }
        cout << " array after moving 0s to the end: " << endl;
        print(a,n);
        
    }
    return 0;
}
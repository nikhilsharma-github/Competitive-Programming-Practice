// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

int transitionPoint(int arr[], int n)
{
    // code here
    int temp;
    sort(arr, arr + n);

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    int i, z = 0, o = 0, index = 0;
    for (i = 0; i < n ; i++)
    {
        
        if (arr[i] == 0)
            z++;
        if(arr[i]==1)
            o++;

        if (arr[i + 1] == 1 && arr[i] == 0)
        {

            index = i + 1;
            // cout<<"index is : "<<index<<" at i "<<i<<endl;
           
        }
    }

    // cout<<" zero : "<<z<<"  one: "<<o<<endl;
    
    if(arr[index]==1)
    // return index;
    temp=index;
    
    else{
        if(z==n)
        // return -1;
        temp=-1;
        else
        // return 0;
        temp=0;
    }
    return temp;
}
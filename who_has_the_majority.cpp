// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x, int y);

// } Driver Code Ends

//User function Template for C++

int majorityWins(int arr[], int n, int x, int y)
{
    // code here
    int p=0, q=0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
        if (arr[i] == x)
        {
            p++;
        }
        if (arr[i] == y)
        {
            // cout<<" value of q : "<<q<<"over : "<<arr[i]<<endl;
            q++;
            
        }
    }
    // cout << endl;
        // cout << p << " " << q;
        if(p==q)
        {
            if(x<y)
            return x;
            else 
            return y;
        }
        else
        {
            if(p<q)
            return q;
            else
            {
                return p;
            }
            
        }
        
}

// { Driver Code Starts.

int main()
{

    int t;      //Testcases
    cin >> t;   // Input the testcases
    while (t--) //Until all testcases are exhausted
    {
        int n;                      //Size of array
        cin >> n;                   //Input the size
        int arr[n];                 //Declaring array of size n
        for (int i = 0; i < n; i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y;                                   //declare x and y
        cin >> x >> y;                              // input x and y
        cout << majorityWins(arr, n, x, y) << endl; //calling the function that you complete
    }

    return 0;
} // } Driver Code Ends
// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main()
{

    long long t;

    //taking testcases
    cin >> t;

    while (t--)
    {
        long long n;

        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n)
{
  if(n==1)
  {
      return a[0];
  }

  
    // Your code here
    int i, j, k, temp, sum1 = -1, sum2 = -2;
    for (i = 0; i < n; i++)
    {
        sum1=0;
        sum2=0;
        for (j = 0; j < i; j++)
            sum1 = sum1 + a[j];

        for (k = n - 1; k >= i + 1; k--)
            sum2 = sum2 + a[k];
     
     cout<<" sum is : "<<sum1<<" before index : "<<i<<endl;
     cout<<" sum is : "<<sum2<<" after index : "<<i<<endl;
        if (sum1 == sum2)
        {
                if(n%2==0)
            return i+1;
            else
            {
                return i;
            }
            
        }
        
    }
        if(i==n)
            return -1;
  
    return 0;
}
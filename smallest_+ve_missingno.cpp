// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int arr[], int n) { 
 int temp=0;
    // Your code here
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>1)
        {
            if(arr[i]-arr[i-1]>1)
            {
                if(arr[i-1]<0)
                {
                    temp=1;
                    break;

                }
                
            temp=arr[i-1]+1;
            break;
                
            }
        }
    }
    if(temp==0)
    return arr[n-1]+1;
    else
    return temp;
    
    
}

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
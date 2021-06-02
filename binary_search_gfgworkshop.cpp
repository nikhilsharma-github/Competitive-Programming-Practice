// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        // cout<<n<<endl;
         int l=0,r=n-1,mid=(l+r)/2;
        
        // cout<<l<<r<<n<<endl;
        
        while(l<=r)
        {
            
            mid=(l+r)/2;
            // cout<<"mid index is : "<<mid<<endl;
            // cout<<"a mid"<<arr[mid]<<endl;
            if(arr[mid]==k)
            {
                return (mid);
            }
            else if(k>arr[mid])
            {
                // cout<<arr[mid]<<"is smaller than "<<k<<endl;
                l=mid+1;
            }
            else if(k<arr[mid])
            {
                // cout<<arr[mid]<<"is greater than "<<k<<endl;
                r=mid-1;
            }
            
        }
        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends
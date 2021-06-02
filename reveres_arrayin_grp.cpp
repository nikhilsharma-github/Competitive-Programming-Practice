// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        long long temp;
        
        // reverse(arr.begin(),arr.begin()+k);
        // reverse(arr.begin()+k,arr.end());
        
       for(int i=0;i<=k/2;i++)
       {
           temp=arr[i];
           arr[i]=arr[k-i-1];
           arr[k-i-1]=temp;
       }
       for(int i=0;i<=(n-k-1)/2;i++)
       {
           temp=arr[i+k];
           arr[i+k]=arr[n-i-1];
           arr[n-i-1]=temp;
       }



        // for(auto it:arr)
        // cout<<it<<" ";
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
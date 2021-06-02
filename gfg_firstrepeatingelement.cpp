// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array
void display(vector<int> r,int i,int n)
{
        cout<<"array is : \n";
    for(int k=i;k<n;k++)
    {
cout<<r[k]<<" ";
    }
    cout<<endl;
}
int firstRepeated(int arr[], int n) {
    //code here

    vector<int> v(arr,arr+n);
    int value=-98;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i-1];
        vector<int> r(arr+i,arr+n);
        cout<<"temp has : "<<arr[i-1];
        cout<<endl;

      display(r,i,n);
        sort(r+i,r+n);
      display(r,i,n);
        bool find=binary_search(r+i,r+n,temp);
        if(find)
        {
         value=temp;
         break;
        }
        
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]==value)
        return (i+1);
    }
    return -1;
}

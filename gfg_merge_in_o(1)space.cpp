// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

void display(int arr[],int n,int k){
    if(k)
    cout<<" arr1 :\n ";
    else
    {
    cout<<" arr2 :\n ";
        
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    // code here 

    int i=0,j=0,k=0,temp;
    int big=max(n,m);
     
    // while(i<n&&j<m)
    while(k<big)
    {
        if(arr1[i]<arr2[j])
        {
            // cout<<arr1[i]<<" is smaller than : "<<arr2[j]<<endl;
            // temp=arr1[i];
            // arr1[i]=arr2[j];
            // arr2[j]=temp;
            // // j++;
            // continue;
            i++;
        }
       else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j]<<" is smaller than : "<<arr1[i]<<endl;
            temp=arr2[j];
            arr2[j]=arr1[i];
            arr1[i]=temp;
            // i++;
            j++;
        }
            // j++;
            // i++;
        k++;
        display(arr1,n,1);
        display(arr2,m,0);
        
    }
    sort(arr2,arr2+m);
  
     
     
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 

        // for (int i = 0; i < n; i++) 
        //     printf("%d ", arr1[i]); 
        
       
	    // for (int i = 0; i < m; i++) 
		//     printf("%d ", arr2[i]); 
	    
	    // cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
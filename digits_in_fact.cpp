// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

int digitsInFactorial(int N)
{
int temp,res;
    cout<< floor(log10(N)+1);

    // temp=floor(log(res)+1);
    // cout<<endl<<temp<<endl;
    // return temp;
    return 0;
//  return floor(log(res)+1);   
}

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
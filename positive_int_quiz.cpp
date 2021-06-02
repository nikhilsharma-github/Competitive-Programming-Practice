// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string smallestK(long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << smallestK(n) << endl;
    }
    return 1;
}
// } Driver Code Ends

//User function Template for C++

string smallestK(long long n)
{
    string ans;
    int k = 1, c = 1, pro = 1;
    while (pro!=n)
    {
        int temp = k;
        c = 1;
        pro = 1;
        while (temp)
        {
            // cout<<"temp : "<<temp<<endl;
            c = temp % 10;
            pro = pro * c;
            temp = temp / 10;
            // cout<<" pro : "<<pro<<endl;
        }
        // if (pro == n)
        // {
            // ans = to_string(k);
            // return ans;
        // }
        // else
        // {
            k++;
        // }
    }
    k=k-1;
    if(pro==n)
    {
    ans = to_string(k);
            return ans;
    }
    ans = to_string(-1);
    return ans;
}

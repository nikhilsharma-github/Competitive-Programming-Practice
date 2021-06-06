// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// #define debug(n) cout<<"#n : "<<n<<endl;
// #define debug(x) cout << #x << "=" << x << endl
#define debug(x) 


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        
        // code here
        vector<int> v;
        long long int  D=(b*b)-(4*a*c);
        debug(D);
        double y=0,x=0;
        if(D<0)
        {
             x=-1;
             v.push_back(x);
             return v;
        }
        else if(D==0)
        {
            x=(-b/(2*a)),y=(-b/(2*a));
        }
        else if(D>0)
        {
            x=(((-b)-(sqrt(D)))/(2*a));
            y=(((-b)+(sqrt(D)))/(2*a));
             if(x>y&&x>=0){
                //  x=int(x^y);
                //  y=int(x^y);
                //  x=int(x^y);
                double temp=x;
                x=y;
                y=temp;
             }
             else if((x<0&&y<0)&&(x<y))
             {
                 
                double temp=x;
                x=y;
                y=temp;
             }
        }
        debug(x);
        debug(y);
        v.push_back(floor(x));
        v.push_back(floor(y));
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
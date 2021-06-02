// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

void quadratic()
            float x,y,temp;
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        float d=((b*b)-(4*a*c));
        cout<<"D IS :"<<d<<endl;
        if(d<0){
         r.push_back(-1);
         return r;
        }
        if(d==0)
        {
            x=floor(-b/2*a);
            y=floor(-b/2*a);
            
        }
        if(d<0){
            temp=sqrt(d);
            x=floor((-b-temp)/2*a);
            y=floor((-b+temp)/2*a);
        }
        r.push_back(x);
            r.push_back(y);
            return r;
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a ;
        cin>>b;
        cin>>c;
        quadratic(a,b,c);
        if(x==-1&&y==-1)
            cout << "Imaginary";
        else
            cout<<x<<" "<<y;
    }
    return 0;
}  // } Driver Code Ends
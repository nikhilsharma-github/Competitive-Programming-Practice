#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int temp;
    cin>>n;
    // cout<<"hello";
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
        // cout<<"hella";
    }
    
    int q,i;
    cin>>q;
    while(q--){
        int k;
        int flag=0;
        cin>>k;
        int min=0;
        for(i=0;i<n;i++)
        {
            // cout<<"hella";
            
            if(v[i]==k)
            {
                // cout<<"hellla";
                cout<<"Yes "<<i+1<<endl;
                break;
            }
            if(v[i]>k)
            {
            min=i;
            flag=1;
            break;
            }
            // temp=i;
            
        }
        if(flag==1)
        {
        cout<<"No "<<min+1<<endl;
        // cout<<v[min];

        }
    }
    return 0;
}

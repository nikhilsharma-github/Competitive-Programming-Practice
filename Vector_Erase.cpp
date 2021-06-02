#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector <int> v);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,temp;
    int s,e;
    cin>>n;
    vector <int> v;
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
        // cout<<"pushed : "<<temp;
        // cout<<endl;
        // display(v);
        
    }
    // display(v);

    // cout<<"fist elemet: "<<*(v.begin())<<endl;
    cin>>s;
    v.erase(v.begin()+(s-1));
// display(v);
    // cout<<"removed 1st"<<endl;;
    // display(v);
    cin>>s>>e;
    
    v.erase(v.begin()+(s-1),v.begin()+e-1);
    // cout<<"removed both";
        // cout<<endl;
    // display(v);
    // cout<<"size : "<<v.size()<<endl;
    // cout<<endl;
    cout<<v.size();
display(v);
    return 0;
}

void display(vector <int> v){
// cout<<endl<<"printing now";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    // cout<<"printing over";
}
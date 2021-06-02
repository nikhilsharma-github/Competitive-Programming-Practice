#include <bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
    // cout<<endl<<"x : "<<x<<" "<<"y: "<<y<<endl;
    return x>y;
}

void vectordemo()
{
    
vector<int> A={33,43,654,23,2321};

cout<<A[4]<<endl;
sort(A.begin(),A.end());

bool present=binary_search(A.begin(),A.end(),654);
cout<<present<<endl;
 present=binary_search(A.begin(),A.end(),65);

A.push_back(3256);
 present=binary_search(A.begin(),A.end(),65);
cout<<present<<endl;
 A.push_back(1000);
 A.push_back(1000);
 A.push_back(1000);
 A.push_back(1000);
 A.push_back(854684);

 for(const auto it:A)
 cout<<it<<" ";
cout<<endl;
sort(A.begin(),A.end());
vector<int> ::iterator it=lower_bound(A.begin(),A.end(),1000);
cout<<*it<<endl;
vector<int> ::iterator it2=upper_bound(A.begin(),A.end(),1000);
cout<<*it2<<endl;

cout<<"diff: "<<it2-it<<endl;

sort(A.begin(),A.end(),f);

for(auto it:A)
cout<<it<<" ";

}
void setdemo(){
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(-7);
    s.insert(11);
    for(auto it:s)
    cout<<it<<" ";
    cout<<endl;
    auto it=s.find(-7);
     ((it==s.end())?cout<<"np\n":cout<<"\np\n");
}

void mapdemo(){

map<int,int> A;
A[1]=100;
A[2]=
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int test;
// cin >> test;
// while (test--)
// {
// int n;
// cin >> n;
// }
// vectordemo();

// setdemo();
mapdemo();
return 0;
}

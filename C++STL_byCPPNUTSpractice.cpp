#include<bits/stdc++.h>
using namespace std;
    void stlset()
    {
        // set<int> set={1,2,3,4,5,1,2,3,4,5};
        // for(const auto &i: set)
        // cout<<i<<" ";
        // cout<<endl;
      
      multiset<int,std::greater<>> ms={1,2,3,4,5,3,4,7,5,2,9};
        for(const auto &i: ms)
        cout<<i<<" ";
        cout<<endl;


    }
void stlarray()
{
    // array<datatype, size> name;
    // it is a fixed size array
    //size is required at compile time, not at runtime;
    // array<int, 10> arr={1,2,3,4,5,6,7};


    // cout<<arr.at(5)<<endl;
    // for(auto it:arr)
    // cout<<it<<" ";
    // cout<<endl;

    // // arr.fill(arr.begin()+7,arr.end(),9);

    // for(auto it:arr)
    // cout<<it<<" ";
    // cout<<endl;

    // cout<<endl<<arr.front()<<endl;
    // cout<<endl<<arr.back()<<endl;

}

void stlvector(){
    // vector<datatype> (size,value for all);
vector<int> v={1,2,3,4,5};
for(auto it:v)
cout<<endl<<it<<" ";
cout<<endl;

v.push_back(8);
v.push_back(9);
cout<<endl<<v.size()<<endl;
cout<<endl<<v.capacity()<<endl;
vector<int>::iterator it;
for(auto ip=v.rbegin();ip!=v.rend();++ip)
cout<<*ip<<" ";



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // stlarray();
// stlvector();
stlset();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void r1(long long n){
    
    if(n==0)
    return;

    r1(n-1);
    cout<<n<<endl;
    r1(n-1);
}
void r2(long long n){
    if(n==0)
    return;

     cout<<n<<endl;
    r2(n-1);
    cout<<n<<endl;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long test;
cin >> test;
while (test--)
{
long long n;
cin >> n;
cout<<" running r1 for number : "<<n<<endl;
 r1(n);
cout<<" running r2 for number : "<<n<<endl;
 r2(n);
}
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long test;
cin >> test;
cout<<test<<" ";
while(test!=1){
    if(test%2==0)
    test=test/2;
    else if(test%2!=0)
    {
        test=(test*3)+1;
    }
    cout<<test<<" ";

}
return 0;
}

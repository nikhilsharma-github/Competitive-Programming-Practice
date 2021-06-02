#include <bits/stdc++.h>
using namespace std;

string pal(long long n){
     cout<<"given number is : "<<n<<endl;
    long long temp=n,d=0,rev=0;
    while(temp!=0){
        d=temp%10;
        cout<<"digit extracted : "<<d<<endl;
        cout<<rev*10<<"+"<<d<<endl;
        rev=rev*10+d;
        cout<<"current number made : "<<rev<<endl;
        temp=temp/10;
    }

    if(rev==n)
    return "palindrome";
    else
    return "not palindrome";

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
cin >> test;
while (test--)
{
 long long n;
 cin>>n;
 cout<<pal(n)<<endl<<endl;
}
return 0;
}


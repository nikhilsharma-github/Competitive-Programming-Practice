#include <bits/stdc++.h>
using namespace std;

long long base2(long long n){
       cout<<endl;
       cout<<" current n in recursion: "<<n<<endl;
       if(n==1||n==0)
       {
         cout<<"n becomes 1 or 0 here, so it stopped"<<endl;
       return 0;
       }
       
       return 1+ base2(n/2);

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
cout<<" GIVEN NUMBER IS : "<<n<<endl;
cout<<" Log base 2 of the number "<<n<<" is : "<<base2(n)<<endl;
}
return 0;
}
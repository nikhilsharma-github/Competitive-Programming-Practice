#include <bits/stdc++.h>
using namespace std;
#define debug(n) cout<<"#n: "<<n<<endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"TESTCASE : "<<test+1<<endl;
        long long n,firstDigit=0,lastDigit=0,temp,totalDigits=0;
        cin >> n;
        long long t=n;
        temp=n/10;
        while(n){
           if(n>temp)
           lastDigit=n%10;
           else if(n<10)
           firstDigit=n%10;

           n=n/10;
           totalDigits++;

        }
        cout<<"total digits are : "<<totalDigits<<endl;
        cout<<"Number is : "<<t<<endl;
        cout<<"First digit : "<<firstDigit<<endl;
        cout<<"Last digit : "<<lastDigit<<endl;
        cout<<"Swapping first and last digit: "<<endl;
        
        t=t-lastDigit+firstDigit;
        cout<<"changing last digit"<<endl;
        debug(t);

        t=t-(int)pow(10,totalDigits-1)*lastDigit;
        debug(t);
        
        t=t+(int)pow(10,totalDigits-1)*firstDigit;
        debug(t);

    
        cout<<t<<endl;
        
        
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
//    vector<int> v;
//     map<int, int> m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        // int n;
        short unsigned int n;
        cin >> n;
           
        int k = 0;
        
        if(n<2){
            cout<<"Not prime\n";
            continue;
        }
        
       
         else
         {
             
        for (  unsigned int i = 2; i <=sqrt(n); i++)
        {

               if(n%i==0)
               {
                   cout<<"Not prime";
                   k=1;
                   break;
               } 
         }
         if(k==0)
         cout<<"Prime";
         
         k=0;
     }   
    }
    return 0;
}
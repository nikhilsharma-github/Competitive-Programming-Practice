#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // long long test;
    // cin >> test;
    // while (test--)
    // { 
        int shift;

        string code;
        cin >> code;
        cin>>shift;
        int s = code.size();

        for (int i = 0; i < s; i++)
        {
            int k = (int)code[i];
            char ch=(char)code[i];
            if ((k <= 47 && k >= 37)||(k <= 64 && k >= 58))
            {
                // cout<<(char)k<<" is not required "<<endl;
                continue;
            }
            else if(k>=65&&k<=90){
                //  cout<<" char is : "<<code[i]<<endl;
              if(shift+k<=90){
                //   cout<<"increment doesnt circulate "<<endl;
                  code[i]=(char)shift+k;
              }    
              else{
                 
                //   cout<<"increment circulates "<<endl;
                //   int r=abs(90-k);
                //   r=shift-r;
                //   code[i]=(char)(r+65-1)%90;
                code[i]='A'+(code[i]-'A'+shift)%26;

              }
            
            }
            else if(k>=97&&k<=122){

                //  cout<<" char is : "<<code[i]<<endl;
              if(shift+k<=122){
                //   cout<<"increment doesnt circulate "<<endl;
                  code[i]=(char)shift+k;
              }    
              else{
                //   code[i]=(char)(shift-122-k);
                //   cout<<"increment circulates "<<endl;
                //  int r=122-k;
                //   r=shift-r;
                //   code[i]=(char)(r+97-1);
                code[i]='a'+(code[i]-'a'+shift)%26;

              }

            }
            else if(k>=48&&k<=57){
                //  cout<<" char is : "<<code[i]<<endl;
              if(shift+k<=57){
                //   cout<<"increment doesnt circulate "<<endl;
                  code[i]=(char)shift+k;
              }    
              else{
                //   code[i]=(char)r;
                //   cout<<"increment circulates "<<endl;
                //  int r=57-k;
                //   r=shift-r;
                //   code[i]=(char)(r+48-1);
                code[i]='0'+(code[i]-'0'+shift)%10;

              }


            }
        }
        cout<<code<<endl;
    // }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool prime[1000000];
bool prime2[1000000]=1;

void ansfunction(int p, int n)
{
    cout<<" this is executed"<<endl;
    int x = p, y = n;
    cout<<" given range : "<<x<<" "<<y<<endl;
       
       for(long long i=y;i>=0;i--)
       {
           if(prime[i])
           {
               cout<<i<<endl;
            printf("%d\n",i);
               break;
           }
       }
    // prime2[]=prime[];
}
void SieveOfEratosthenes(int n)
{
    // int x = p, y = n;
    cout<<" this is executed "<<endl;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
                // prime2[i]=false;
            }
        }
    }



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes(1000000);
    int test;
    scanf("%d",&test);
    while (test--)
    {
        long long x, y;
        scanf("%d%d",&x,&y);




        if((x==2||y==3)&&(y==2||y==3))
        {
            printf("1\n");
            continue;
        }
        else
        ansfunction(x,y);
        // SieveOfEratosthenes(x, y);
    }
    return 0;
}
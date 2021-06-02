#include <bits/stdc++.h>
using namespace std;


void display(int a[],int b[],int i,int j){
 
 cout<<"array a:\n";
    for(int p=0;p<i;p++)
    {
      cout<<a[p]<<" ";
    }
    cout<<endl;
 cout<<"array b:\n";
    for(int p=0;p<j;p++)
    {
      cout<<b[p]<<" ";
    }
    cout<<endl;
}
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
 
    while (test--)
    {

        int n, m, s1 = 0, s2 = 0, m1 = INT_MAX, m2 = 0, i1 = 0, j1 = 0, big = 0, c = 0;

           s1 = 0, s2 = 0, m1 = INT_MAX, m2 = 0, i1 = 0, j1 = 0, big = 0, c = 0;         
        cin >> n >> m;
        int a[n], b[m];


        big = max(n, m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // s1 = s1 + a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            // s2 = s2 + b[i];
        }

// cout<<s1<<" "<<s2;
        while (s1 <= s2 && c <= big*2)
        {
            s1=0,s2=0;
             m1 = INT_MAX, m2 = 0;
            for (int i = 0; i < n; i++)
            {
                s1=s1+a[i];
                if (a[i] < m1)
                {
                    m1 = a[i];
                    i1 = i;
                }
            }
               
            for (int j = 0; j < m; j++)
            {
                s2=s2+b[j];
                if (b[j] > m2)
                {
                    m2 = b[j];
                    j1 = j;
                }
            }

             cout<<"s1 is : "<<s1<<" and s2 is : "<<s2<<endl;
             cout<<"m1 and m2 is : "<<m1<<" "<<m2<<endl;
            cout<<"min from a is : "<<m1<<" at : "<<i1<<endl;
            cout<<"max from b is : "<<m2<<" at : "<<j1<<endl;

            int temp = a[i1];
            a[i1] = b[j1];
            b[j1] = temp;
              
              display(a,b,n,m);
            // s1 = s1 - a[i1] + b[j1];
            // s2 = s2 - b[j1] + a[i1];

            

            c++;
            
        }
        if (c <= big)
            cout << c-1;
        else
            cout << "-1";
        

        cout << endl;
    }
    return 0;
}
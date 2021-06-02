#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Leaders1(int a[], int n)
{
    
  bool flag=true;
    for (int i = 0; i < n; i++)
    {
          flag=true;
        for (int j = i + 1; j < n; j++)
        {

            if (a[j]>=a[i]){
              flag=false;
            break;

            }
        }
        if(flag==true)
        cout<<a[i]<<" ";
    }
}
void Leaders2(int a[], int n)
{
    // vector<int> v;
    // v.push_back(a[n - 1]);
    int m = a[n-1];
    cout<<m<<" ";
    for (int i = n - 2; i >= 0; i--)
    {
         if(a[i]>m){
         m=max(a[i],m);

         cout<<a[i]<<" ";
         }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        cout<<endl;
        cout << "testcase " << test + 1 << endl;
        long long n;
        cin >> n ;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "given array is :" << endl;
        print(a, n);
        // Using n^2 space complexity
        cout<<" leaders are: "<<endl;
        Leaders1(a, n);
        cout<<endl;
        cout<<" leaders are: "<<endl;

        Leaders2(a,n);
    }
    return 0;
}
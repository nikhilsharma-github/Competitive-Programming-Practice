#include <bits/stdc++.h>
using namespace std;


void print(int a[],int n=0){
     
    cout<<"array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
}
void leftrotate(int a[],int n){

     int temp=a[0];

     for(int i=1;i<n;i++){
         a[i-1]=a[i];
     }
     a[n-1]=temp;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        bool res = true;
        long long n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << " GIVEN ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl
             << endl;

             leftrotate(a,n);
            print(a,n);
     
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int low,int high){
   
   while(low<high){
       a[low]=a[low]^a[high];
       a[high]=a[low]^a[high];
       a[low]=a[low]^a[high];
       low++,high--;
   }

}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int* rotateByD(int a[],int n,int d){
    if(d==n)
    return a;

    int temp[d];
      for(int i=0;i<d;i++){

           temp[i]=a[i];
           cout<<a[i]<<" is copied to index "<<i<<" of temp "<<endl;
      }
      for(int i=d;i<n;i++){
          cout<<a[i]<<" of index "<<i<<" is shifted to index "<<i-d<<endl;
          a[i-d]=a[i];
      }
      for(int i=0;i<d;i++){
         cout<<temp[i]<<" of index "<<i<<" of temp is copied to "<<n-d+i<<" index of a "<<endl;
         a[n-d+i]=temp[i];
      }

      return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        cout<<"testcase "<<test+1<<endl;
        long long n,d;
        cin >> n>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // TAKING EXTRA ARRAY
    //     int *k=new int(n);
    //     cout<<"rotate d: "<<d<<endl;
    //     print(a,n);
    //    k= rotateByD(a,n,d);
    //        print(k,n);


    // BEST SOLUTION
    cout<<" given array is : ";
    print(a,n);
        cout<<"rotate d: "<<d<<endl;
     reverseArray(a,0,d-1);
     reverseArray(a,d,n-1);
     reverseArray(a,0,n-1);
           cout<<"rotated array is"<<endl;
           cout<<" USING ARRAY REVERSAL ALGORITHM: "<<endl;
     print(a,n);
    }
    return 0;
}
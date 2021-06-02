#include <bits/stdc++.h>
using namespace std;
void display(int a[],int n);
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//Shifting one by one element
// time complexity o(n2)
int a[7]={1,2,3,4,5,6,7};
int t[2];
int d=2;
int n=7;
int i,j;
int temp;

for(int i=0;i<d/2;i++)
{
    temp=a[i];
    a[i]=a[d-1-i];
    a[d-i-1]=temp;
}
cout<<"1st loop:\n";
display(a,n);
cout<<endl;

for(int i=0;i<(n-d)/2;i++)
{
    temp=a[i+d];
    a[i+d]=a[n-1-i];
    a[n-i-1]=temp;
}
cout<<"2st loop:\n";
display(a,n);

for(int i=0;i<n/2;i++)
{
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-i-1]=temp;
}
cout<<"\nfinal thing : \n ";


for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;


}

void display(int a[],int n){
    
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

}
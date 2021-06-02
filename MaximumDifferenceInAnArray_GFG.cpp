#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void maximumDifference(int a[], int n)
{

    
      int maxx=INT_MIN,m=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            m=max(m,a[j]-a[i]);
        }
        maxx=max(maxx,m);
    }
    if(n==1)
    maxx=a[0];
    cout<<"maximum difference is : "<<maxx<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        cout << endl;
        cout << "testcase " << test + 1 << endl;
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "given array is :" << endl;
        print(a, n);
        cout << "maximum difference is : " << endl;
        cout << "USING N^2 complexity" << endl;
        maximumDifference(a, n);
    }
    return 0;
}
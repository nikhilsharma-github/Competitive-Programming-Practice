#include <bits/stdc++.h>
using namespace std;
int towerOfHanoi(long long n, char x, char y, char z,int s=0)
{

    if (n == 1)
    {
        cout << "Move disc 1 from " << x << " to " << z << endl;
        return s;
    }
     s++;
     cout<<" current no of steps done "<<endl;
    towerOfHanoi(n - 1, x, z, y,s);
    cout << "Move disc " << n << " from " << x << " to " << z << endl;
    towerOfHanoi(n - 1, y, x, z,s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        // cout << " Enter Number of disks: ";
        cin >> n;
        cout<<" Tower of hanoi Solution for disks : "<<n<<endl;
        int p=towerOfHanoi(n, 'A', 'B', 'C');
        cout<<"no of steps taken: "<<p<<endl;
    }
    return 0;
}
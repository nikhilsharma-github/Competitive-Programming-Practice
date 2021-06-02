#include <bits/stdc++.h>
using namespace std;


// int power(int x, int n)
// {
// 	if(n == 0)
// 		return 1;

// 	int temp = power(x, n/2);

// 	temp = temp * temp;

// 	if(n % 2 == 0)
// 		return temp;
// 	else
// 		return temp * x; 
// }
// int main() {
    
//     int x = 4, n = 3;

// 	cout<<power(x, n);
// }
long long computingpower_recursive(long long n=1, long long m=1)
{

    if (m == 0)
    {
        // cout << " power comes to 0 here" << endl;
        return 1;
    }
    long long pow = computingpower_recursive(n, m / 2);

    pow = pow * pow;
    // cout << " pow currently is : " << pow << endl;
    if (m % 2 == 0)
    {
        // cout << " pow currently is : " << pow << endl;
        return pow;
    }
    else
    {

        // cout << " pow currently is : " << pow << endl;
        return pow * n;
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
        long long n, m;
        cin >> n >> m;
        cout << " power of " << n << "^" << m << " is : " << computingpower_recursive(n, m) << endl;
    }
    return 0;
}
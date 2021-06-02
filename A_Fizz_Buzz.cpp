#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if (n % 3 == 0)
        cout << "Fizz" << endl;
    else if (n % 5 == 0)
        cout << "Buzz" << endl;

        
}
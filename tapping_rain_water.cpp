#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int leftm(int a[], int n, int i);
int rightm(int a[], int n, int i);
void tapwater(int a[], int n);
int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
          int sum = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int lm = a[i];
        for (int k = 0; k < i; k++)
        {
            lm = max(lm, a[k]);
        }
        int rm = a[i];
        for (int k = i + 1; k < n; k++)
        {
            rm = max(rm, a[k]);
        }
        
        sum = sum + min(lm, rm) - a[i];
    }
    cout << sum << endl;
        // tapwater(a, n);
    }
    return 0;
}

void tapwater(int a[], int n)
{
    int sum = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int lm = a[i];
        for (int k = 0; k < i; k++)
        {
            lm = max(lm, a[k]);
        }
        int rm = a[i];
        for (int k = i + 1; k < n; k++)
        {
            rm = max(rm, a[k]);
        }
        
        sum = sum + min(lm, rm) - a[i];
    }
    cout << sum << endl;
}

// int leftm(int a[], int n, int i)
// {
//     int lm = a[i];
//     for (int k = 0; k < i; k++)
//     {
//         lm = max(lm, a[k]);
//     }
//     return lm;
// }

// int rightm(int a[], int n, int i)
// {
//     int rm = a[i];
//     for (int k = i + 1; k < n; k++)
//     {
//         rm = max(rm, a[k]);
//     }
//     return rm;
// }
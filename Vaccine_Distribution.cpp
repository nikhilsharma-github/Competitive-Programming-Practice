// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long n, d;
//         cin >> n >> d;
//         long long a[n];

//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         // sort(a.begin(), a.end());
//         long long danger = 0, nodanger = 0;
//         for (int i = 0; i < n; i++)
//         {
//                 if (a[i] >= 80 || a[i] <= 9)
//                 danger = danger + 1;
//                 else
//                 nodanger=nodanger+1;
                
//         }
//         // nodanger = n - danger;

//         long long days = ceil((double)danger / (double)d) + ceil((double)nodanger / (double)d);
//         cout << days << endl;

//         return 0;
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        long long n, d;
        cin >> n >> d;
        long long a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        // sort(a.begin(), a.end());
        long long  danger = 0, nodanger = 0,result=0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] >= 80 || a[i] <= 9)
                danger = danger + 1;
                else
                nodanger=nodanger+1;
                
        }
        // nodanger = n - danger;

        // long long days = ceil((double)danger / (double)d) + ceil((double)nodanger / (double)d);
        // cout << days << endl;
         result=result
        return 0;
    }
}

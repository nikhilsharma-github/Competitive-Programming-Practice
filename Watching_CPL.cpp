#include <bits/stdc++.h>
using namespace std;

void display(vector<int> v, int n)
{
    cout << " modified array is : " << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int sum1 = 0, sum2 = 0, meh = 0,msf = 0;
        int n, s, c = 0, k = 0;
        cin >> n >> s;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<>());

        sum1 = v[0];
        sum2 = v[1];
        v[0] = 0;
        v[1] = 0;

        if (sum1 >= s)
            c++;
        if (sum2 >= s)
            c++;

        if (sum1 >= s && sum2 >= s)
        {
            cout << "2" << endl;
            continue;
        }
        int temp1=s-sum1;
        int temp2=s-sum2;



        for (int i = 2; i < n; i++)
        {
            
        }

        display(v, n);

        cout << c;
        c = 0;
        cout << endl;
    }
    return 0;
}

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
//         int n, s, sum = 0, c = 0, k = 0;
//         cin >> n >> s;
//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end(), greater<>());

//         sum = 0;

//         // cout << "sum at start : " << sum << endl;
//         for (int i = 0; i < n; i++)
//         {

//             // cout << "i : " << i << endl;
//             sum = sum + v[i];
//             // cout << "sum till now : " << sum << endl;
//             c++;
//             // cout << "boxes used : " << c << endl      << endl;

//             if (sum >= s && i >= 0)
//             {
//                 // cout << "sum is : " << sum << " and is greater than : " << s << endl;
//                 k++;
//                 sum = 0;
//             }

//             if (k == 2)
//                 break;
//         }

//         cout << c;
//         c = 0;
//         cout << endl;
//     }
//     return 0;
// }
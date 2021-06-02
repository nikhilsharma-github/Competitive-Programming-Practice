#include <stdio.h>

int main()
{
    long long int test, n, d, a[1000000], k = 0, c = 0, m = 0;
    scanf("%lld", &test);
    for (long long int i = 1; i <= test; i++)
    {
        scanf("%lld", &n);
        scanf("%lld", &d);

        for (long long int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        for (long long int i = 0; i < n; i++)
        {

            if (a[i] <= 9 || a[i] >= 80)
            {
                k++;
            }
            else
            {
                c++;
            }
        }
        for (long long int b = 0; b < n; b++)
        {
            if (k >= 1)
            {
                k = k - d;
                m++;
            }
            else if (c >= 1)
            {
                c = c - d;
                m++;
            }
            if (k <= 0 && c <= 0)
            {
                break;
            }
        }
        printf("%lld\n", m);
        k = 0;
        c = 0;
        m = 0;
    }

    return 0;
}
    //         cin >> n;
    //         cin >> d;

    //         for (long long int i = 0; i < n; i++)
    //             cin >> a[i];

    //         for (long long int i = 0; i < n; i++)
    //         {

    //             if (a[i] <= 9 || a[i] >= 80)
    //             {
    //                 k++;
    //             }
    //             else
    //             {
    //                 c++;
    //             }
    //         }
    //         for(long long int b=0;b<n;b++)
    //         {
    //             if(k>=1)
    //             {
    //                 k=k-d;
    //                 m++;
    //             }
    //             else if(c>=1)
    //             {
    //                 c=c-d;
    //                 m++;
    //             }
    //            else if(k<=0&&c<=0)
    //             break;
    //         }
    //         cout<<m<<endl;
    //         k=0,c=0,m=0;
    //     }
    //     return 0;
    // }

    // #include <bits/stdc++.h>
    // using namespace std;
    // int main()
    // {
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     long long int test, n, d, a[1000000], k = 0, c = 0, m = 0;
    //     cin >> test;
    //     while (test--)
    //     {
    //         cin >> n;
    //         cin >> d;

    //         for (long long int i = 0; i < n; i++)
    //             cin >> a[i];

    //         for (long long int i = 0; i < n; i++)
    //         {

    //             if (a[i] <= 9 || a[i] >= 80)
    //             {
    //                 k++;
    //             }
    //             else
    //             {
    //                 c++;
    //             }
    //         }
    //         for(long long int b=0;b<n;b++)
    //         {
    //             if(k>=1)
    //             {
    //                 k=k-d;
    //                 m++;
    //             }
    //             else if(c>=1)
    //             {
    //                 c=c-d;
    //                 m++;
    //             }
    //            else if(k<=0&&c<=0)
    //             break;
    //         }
    //         cout<<m<<endl;
    //         k=0,c=0,m=0;
    //     }
    //     return 0;
    // }
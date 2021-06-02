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
        vector<pair<int, int>> v(5);

        long long n, k, x, y, c = 1, m, clock = 0, anticlock = 0, p, q, temp = 0;
    
        cin >> n >> k >> x >> y;
        p = x, q = y;
        if (x == y)
        {
            cout << n << " " << n << endl;
            continue;
        }
        if (x > y)
        {
            q = q + n - p;
            p = n;
            anticlock = 1;
        }
        if (x < y)
        {
            p = p + n - q;
            q = n;
            clock = 1;
        }

        v[0].first=p;
        v[0].second=q;
        // cout<<v[0].first<<" "<<v[0].second<<endl;

        // cout << clock << anticlock << endl;

        // cout << " p: " << p << " q : " << q << endl;

        while (c < 4)
        {
            //    cout<<c<<" bounce back\n";
            // cout << " previous\n p : " << p << " q : " << q << endl;

            if (anticlock == 1)
            {
                if (p == n && q > 0)
                {
                    temp = p;
                    p = q;
                    q = temp;

                   
                    // cout << "\n swapped them for side 1 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p > 0 && q == n)
                {
                   
                    q = q - p;
                    p = 0;

                    // cout << "\n decrement them for side 2 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p == 0 && q > 0)
                {
                    temp = p;
                    p = q;
                    q = temp;

                    //   cout << "\n swapped them for side 3 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p > 0 && q == 0)
                {
              

                    q = n - p;
                    p = n;
                    //    cout << "\n increment them for side 4 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
              
            }
            if (clock == 1)
            {
                if (p > 0 && q == n)
                {
                    temp = p;
                    p = q;
                    q = temp;
                    // cout << "\n swapped them for side 1 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p == n && q > 0)
                {
                    // m = min(p, q);
                    // while (m > 0)
                    // {

                    //     p--;
                    //     q--;
                    //     m--;

                    // }

                    p = n - q;
                    q = 0;

                    // cout << "\n decrement them for side 2 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p > 0 && q == 0)
                {
                    temp = p;
                    p = q;
                    q = temp;

                    //   cout << "\n swapped them for side 3 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
                else if (p == 0 && q > 0)
                {
                    m = max(p, q);
                    // while (m < n)
                    // {
                    //     p++;
                    //     q++;
                    //     m++;
                    // }

                    p = n - q;
                    q = n;

                    //    cout << "\n increment them for side 4 \n";
                    // cout << " p : " << p << " q : " << q << endl;
                }
            }
                //  v.push_back(make_pair(p,q));
                v[c].first=p;
                v[c].second=q;
                //  cout<<" v[i] is : "<<c<<" first : "<<v[c].first<<" second : "<<v[c].second<<endl;
            c++;

        }
          
          int r=k%4;
          if(r==0)
          r=4;

          cout<<v[r-1].first<<" "<<v[r-1].second<<endl;
          
          
          
          
          
          
        // cout << endl;
        
        v.clear();
    }
    return 0;
}
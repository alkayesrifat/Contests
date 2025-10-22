/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/10/2025 (Wednesday)
 * Time       : 20:32
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alkayesrifat;
    cin >> alkayesrifat;
    while (alkayesrifat--)
    {
        int a, b;
        cin >> a >> b;

        int odd = 0;
        int even = 0;

        if (a == b)
        {
            if (a % 2 == 0)
            {
                even += a;
            }
            else
            {
                odd += a;
            }
        }
        else
        {
            for (int i = a; i <= b; i++)
            {
                if (i % a == 0)
                {
                    if (i % 2 == 0)
                    {
                        even += i;
                    }
                    else
                    {
                        odd += i;
                    }
                }
            }
        }

        if (even >= odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/09/2025 (Wednesday)
 * Time       : 20:42
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
        int n, m;
        cin >> n >> m;

        int cnt = 0;

        while (n >= 0 && m >= 0)
        {
            if(n <= 0 && m <= 0 )break;
            if (n >= 2 && m >= 1)
            {
                cnt += 2;
                n -= 2;
                m -= 1;
            }
            else if (n >= 3 && m <= 0)
            {
                cnt += 1;
                n -= 3;
            }
            else if (n <= 0 && m >= 3)
            {
                cnt += 2;
                m -= 3;
            }
            else if (m >= 2 && n >= 1)
            {
                cnt += 2;
                m -= 2;
                n -= 1;
            }
            // cout << n << " " << m << endl;
        }
        cout << cnt << endl;
        // cout <<  n << " " << m << endl;
    }

    return 0;
}
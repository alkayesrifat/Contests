/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/08/2025 (Sunday)
 * Time       : 21:15
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

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        ll sum = 0;
        if (n % 2 == 0)
        {

            for (int i = 0; i < n - 1; i++)
            {

                ll ma = max(v[i], v[i + 1]);
                i++;
                sum += ma;
            }
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {

                ll ma = max(v[i], v[i + 1]);
                i++;
                sum += ma;
            }
            sum += v[n - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
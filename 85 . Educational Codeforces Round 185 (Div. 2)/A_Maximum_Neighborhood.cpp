/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/11/2025 (Friday)
 * Time       : 20:39
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> // - Use 'less<T>' for set, 'less_equal<T>' for multiset
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
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << 9 << endl;
            continue;
        }

        int ans1 = 0;

        int a = n * n;
        a--;

        ans1 = a + (a + 1) + (a - 1) + (a - n);

        int ans2 = 0;

        a = n * (n - 1);
        a--;

        ans2 = a + (a + 1) + (a - 1) + (a - n) + (a + n);

        cout << max(ans1, ans2) << endl;
    }

    return 0;
}
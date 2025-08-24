/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/08/2025 (Sunday)
 * Time       : 18:54
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

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> b(n);

    vector<pair<int, int>> mp(n);

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[i].first = a[i];
        mp[i].second = b[i];

        sum += min(a[i], b[i]);
    }



    while (q--)
    {
        char c;
        int x, y;
        cin >> c >> x >> y;
        x--;

        if (c == 'A')
        {

            int currmin = min(mp[x].first, mp[x].second);
            sum -= currmin;

            mp[x].first = y;

            currmin = min(mp[x].first, mp[x].second);

            sum += currmin;
            

            cout << sum << endl;
        }
        else
        {
            int currmin = min(mp[x].first, mp[x].second);
            sum -= currmin;

            mp[x].second = y;

            currmin = min(mp[x].first, mp[x].second);

            sum += currmin;

            cout << sum << endl;
        }
        // cout << mp[x].first << " " << mp[x].second << endl;
    }
    

    return 0;
}
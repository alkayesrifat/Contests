/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/10/2025 (Wednesday)
 * Time       : 20:37
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
        int n;
        cin >> n;

        int a = 0;

        int cnt = n - 1;

        int pos = n;

        while (cnt >= 1)
        {
            if (a == 0)
            {

                pos = pos - cnt;
                a = 1;
            }
            else
            {
                pos = pos + cnt;
                a = 0;
            }
            cnt--;
        }

        cout << pos << endl;
    }

    return 0;
}
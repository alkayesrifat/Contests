/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/09/2025 (Thursday)
 * Time       : 20:48
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int cnt = 0;
        set<int> choto;
        int boro = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == k)
            {
                cnt++;
            }
            else if (v[i] < k)
            {
                choto.insert(v[i]);
            }
            else
            {
                boro++;
            }
        }

        if (choto.size() == k)
        {
            cout << cnt << endl;
        }
        else
        {
            // cout << choto.size() + cnt << endl;

            int lakbe = k - choto.size();
            if (cnt >= 1)
            {

                if (cnt > lakbe)
                {
                    cout << cnt - lakbe + (lakbe) << endl;
                }
                else if (cnt == lakbe)
                {
                    cout << cnt << endl;
                    /* code */
                }
                else
                {
                    cout << lakbe - cnt  + cnt<< endl;
                }
            }
            else
            {
                cout << lakbe << endl;
            }
        }
    }

    return 0;
}
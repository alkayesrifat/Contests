/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/09/2025 (Wednesday)
 * Time       : 21:26
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

        ll psum = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            psum += v[i];
        }

        multiset<int> ml;

        for (int i = 0; i < k; i++)
        {
            int val;
            cin >> val;
            ml.insert(val);
        }

        sort(v.begin(), v.end());

        // cout <<psum << " ";
        // for(auto x:v){
        //     cout << x << " ";
        // }cout << endl;

        for (auto x : ml)
        {

            if (x <= n)
            {

                int ind = (n - x);
                psum -= v[ind];
                n -= x;

                // cout << ind << ' ';
            }
        }
        cout << psum << endl;
    }

    return 0;
}
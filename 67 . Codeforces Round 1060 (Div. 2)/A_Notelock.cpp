/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/10/2025 (Sunday)
 * Time       : 20:39
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

        string s;
        cin >> s;

        int cnt = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back(i);
            }
        }

        if (v.size() <= 2)
        {
            if (v.size() == 1)
            {
                cout << 1 << endl;
            }
            else if(v.size() == 2)
            {
                int dif = v[1] - v[0] + 1;
                if (dif <= k)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
            else
            {
                cout << 0 << endl;
            }
            

            continue;
        }
        else
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i + 1] - v[i] + 1 <= k)
                {
                }
                else
                {
                    cnt++;
                }
            }
            cout << cnt + 1 << endl;
        }
    }

    return 0;
}
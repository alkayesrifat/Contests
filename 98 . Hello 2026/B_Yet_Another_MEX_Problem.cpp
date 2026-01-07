/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/01/2026 (Wednesday)
 * Time       : 20:52
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
        int n, k;
        cin >> n >> k;

        vector<int> v;

        map<int, int> mp;
        int dupli = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (mp[val] >= 1)
            {
                dupli++;
            }
            else
            {
                v.push_back(val);
            }
            mp[val]++;
        }
        int ope = (n - k) + 1;

        ope -= dupli;
        // cout << ope << " ";

        sort(v.rbegin(), v.rend());

        vector<int> ans;
        if (ope > 0)
        {
            for (int i = ope; i < v.size(); i++)
            {

                ans.push_back(v[i]);
            }
            int paici = -1;
            sort(ans.begin(),ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] != i)
                {
                    paici = i;
                    break;
                }
                else
                {
                    if (i == ans.size() - 1)
                    {
                        paici = ans[ans.size() - 1] + 1;
                    }
                }
            }
            // for(auto x  : ans){
            //     cout <<x <<  " ";
            // }
            // cout << endl;

            cout << paici << endl;

        }
        else
        {
            int paici = -1;
            sort(v.begin(),v.end());
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] != i)
                {
                    paici = i;
                    break;
                }
                else
                {
                    if (i == v.size() - 1)
                    {
                        paici = v[v.size() - 1] + 1;
                    }
                }
            }

            cout << paici << endl;
        }
    }

    return 0;
}
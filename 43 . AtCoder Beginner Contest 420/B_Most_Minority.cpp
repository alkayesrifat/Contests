/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/08/2025 (Sunday)
 * Time       : 18:10
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

    int p, n;
    cin >> p >> n;

    map<int, int> mp;

    vector<string> st;

    for (int i = 0; i < p; i++)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        int one = 0;
        int zero = 0;
        for (int j = 0; j < p; j++)
        {
            if (st[j][i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        // cout << one << " " << zero << endl;

        if (one == 0 || zero == 0)
        {
            for (int j = 0; j < p; j++)
            {
                mp[j]++;
            }
        }
        else if (one > zero)
        {
            for (int j = 0; j < p; j++)
            {
                if (st[j][i] == '0')
                {
                    mp[j]++;
                }
            }
        }
        else
        {

            for (int j = 0; j < p; j++)
            {
                if (st[j][i] == '1')
                {
                    mp[j]++;
                }
            }
        }
    }

    int maxx = INT_MIN;

    for (auto x : mp)
    {
        
        maxx = max(maxx,x.second);
    }


    set<int>v;

    for(auto x  : mp){
        if(x.second == maxx){
            v.insert(x.first);
        }
    }

    for(auto x  :v){
        cout << x +1 << " ";
    }


    return 0;
}
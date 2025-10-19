/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/10/2025 (Saturday)
 * Time       : 18:39
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

vector<string> sortl(vector<string> &arr)
{

    sort(arr.begin(), arr.end());

    return arr;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {

        string temp = "";

        int cnt = 0;

        for (int j = i; j < n; j++)
        {

            if (cnt == k)
                break;

            temp += s[j];

            cnt++;
        }

        if (temp.size() == k)
        {
            mp[temp]++;
        }
    }

    int maxx = INT_MIN;

    for (auto x : mp)
    {
        maxx = max(maxx, x.second);
    }
    vector<string> v;
    for (auto x : mp)
    {
        if (x.second == maxx)
        {
            v.push_back(x.first);
        }
    }

    vector<string> an = sortl(v);

    cout << maxx << endl;

    for (auto x : an)
    {
        cout << x << " ";
    }

    return 0;
}
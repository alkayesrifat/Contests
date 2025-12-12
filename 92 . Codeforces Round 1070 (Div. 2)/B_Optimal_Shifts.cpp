/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/12/2025 (Thursday)
 * Time       : 21:00
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

        string s;
        cin >> s;

        if (s[0] == '0' && s[n - 1] == '0')
        {

            int ans = INT_MIN;
            int cnt = 0;
            int start = -1;
            int end = -1;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cnt++;
                }
                else
                {
                    start = i;
                    break;
                }
            }

            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    cnt++;
                }
                else
                {
                    end = i;
                    break;
                }
            }

            ans = max(ans, cnt);

            for (int i = start; i <= end; i++)
            {
                if (s[i] == '0')
                {
                    cnt++;
                    ans = max(cnt, ans);
                }
                else
                {
                    ans = max(cnt, ans);
                    cnt = 0;
                }
            }

            if (ans == INT_MIN || ans == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
        else
        {
            int ans = INT_MIN;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cnt++;
                    ans = max(cnt, ans);
                }
                else
                {
                    ans = max(cnt, ans);
                    cnt = 0;
                }
            }
            if (ans == INT_MIN || ans == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }

    return 0;
}
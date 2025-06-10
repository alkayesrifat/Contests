/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio: alkayesrifat.netlify.app
 * Date: 2025-06-08 (Sunday) 08:02
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {

            vector<int> ans(n + 1);

            int l = 1;
            int r = n;
            int k = 1;

            while (l < r)
            {

                ans[l] = k;
                ans[r] = k + 1;
                k = k + 2;
                l++;
                r--;
            }

            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {

            vector<int> ans(n + 1);

            int l = 1;
            int r = n;
            int k = 1;

            while (l < r)
            {

                ans[l] = k;
                ans[r] = k + 1;
                k = k + 2;
                l++;
                r--;
            }

            int index = (n + 1) / 2;

            ans[index] = n;

            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
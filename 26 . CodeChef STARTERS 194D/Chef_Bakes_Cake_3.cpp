/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 20:59
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

        vector<int> v(n);

        int maxx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxx = max(maxx, v[i]);
        }

        long long ans = INT_MIN;
        for (int i = 0; i <= maxx; i++)
        {
            long long sum = 0;
            int take = i;
            for (int j = 0; j < n; j++)
            {

                if (v[j] > take)
                {
                    sum += take;
                }
                else
                {
                    sum += v[j];
                }

            }

            long long se = sum * 50;
            long long cost = (n * take) * 30;
            long long re = (se - cost);

            ans = max(ans, re);
        }
        cout << ans << endl;
    }

    return 0;
}
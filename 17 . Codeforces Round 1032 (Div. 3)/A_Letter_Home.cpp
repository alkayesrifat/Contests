/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/06/2025 (Tuesday)
 * Time       : 20:40
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
        int n, s;
        cin >> n >> s;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int cnt = 0;

        int maxx = v[n - 1];

        int minn = v[0];

        if (s <= maxx && s >= minn)
        {

            cnt = v[n - 1] - s;

            cnt = cnt * 2;

            cnt = cnt + (s - v[0]);

            int cnt2 = s - v[0];

            cnt2 = cnt2 * 2;

            cnt2 = cnt2 + (v[n - 1] - s);

            cout << min(cnt, cnt2) << endl;
        }
        else if (s > maxx)
        {
            cnt = s - v[0];
            cout << cnt << endl;
        }
        else
        {
            cnt = maxx - s ;
            cout << cnt << endl;
        }
        
        
        
    }

    return 0;
}
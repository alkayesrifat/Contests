/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-23   20:44:11
 * ---------------------
 * Problem Link: https://www.codechef.com/START183D/problems/LARGSMALL
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

        int minn = INT_MAX;
        int maxx = INT_MIN;

        while (n--)
        {
            int val;
            cin >> val;
            minn = min(minn, val);
            maxx = max(maxx, val);
        }

        int re = (maxx - minn) - 1;

        if (re < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << re << endl;
        }
    }

    return 0;
}
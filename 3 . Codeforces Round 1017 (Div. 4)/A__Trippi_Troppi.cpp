/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-13   21:38:26
 * ---------------------
 * Problem Link: https://codeforces.com/contest/2094/problem/0
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
        string a, b, c;
        cin >> a >> b >> c;

        string ans;
        ans.push_back(a[0]);
        ans.push_back(b[0]);
        ans.push_back(c[0]);

        cout << ans << "\n";
    }

    return 0;
}
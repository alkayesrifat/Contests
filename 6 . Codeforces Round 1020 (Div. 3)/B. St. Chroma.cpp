/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-24   21:01:10
 * ---------------------
 * Problem Link: https://codeforces.com/contest/2106/problem/B
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
        int a, b;
        cin >> a >> b;

        vector<int> ans;

        for (int i = 0; i < a; i++)
        {
            ans.push_back(i);
        }

        int maxx = -8;

        for (auto x : ans)
        {

            if (x == b)
            {
                maxx = x;
            }
            else
            {
                cout << x << " ";
            }
        }

        if (maxx != -8)
        {
            cout << maxx;
        }

        cout << endl;
    }

    return 0;
}
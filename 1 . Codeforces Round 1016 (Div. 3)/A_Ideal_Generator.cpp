/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-08   20:44:51
 * ---------------------
 * Problem Link: https://codeforces.com/contest/2093/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
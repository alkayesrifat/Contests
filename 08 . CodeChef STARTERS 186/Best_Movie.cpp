/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: https://www.codechef.com/START186D/problems/BESTMOVIE
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

        int result = INT_MAX;

        while (n--)
        {
            int rate;
            cin >> rate;
            int cost;
            cin >> cost;

            if (rate >= 7)
            {
                result = min(cost, result);
            }
        }

        if (result == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
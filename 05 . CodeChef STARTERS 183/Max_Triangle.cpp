/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: https://www.codechef.com/START183D/problems/MAXTRI
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
        if (n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            int result = n + (n - 1) + (n - 2);
            cout << result << endl;
        }
    }

    return 0;
}
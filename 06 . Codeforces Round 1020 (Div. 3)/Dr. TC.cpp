/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-24   20:46:36
 * ---------------------
 * Problem Link:  https://codeforces.com/contest/2106/problem/A
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
        string s;
        cin >> s;
        int one = 0;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                int temp = one - 1;
                result = result + temp;
            }
            else
            {
                int temp = one + 1;
                result = result + temp;
            }
        }

        cout << result << endl;
    }

    return 0;
}
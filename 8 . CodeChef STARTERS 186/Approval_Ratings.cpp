/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: https://www.codechef.com/START186D/problems/APPROVAL
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

        int zero = 0;
        long long int sum = 0;
        vector<int> v;
        for (int i = 0; i < 5; i++)
        {
            int val;
            cin >> val;
            sum = sum + val;
            if (val == 0)
            {
                zero++;
            }
            v.push_back(val);
        }
        sort(v.begin(), v.end());

        if (sum >= 35)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < 5; i++)
            {
                sum = (sum - v[i]) + 10;

                cnt++;
                if (sum >= 35)
                {
                    break;
                }
            }
            long long int ans = cnt * 100;
            cout << ans << endl;
        }
    }

    return 0;
}
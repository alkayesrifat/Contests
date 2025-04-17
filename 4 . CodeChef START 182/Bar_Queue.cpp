/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-16   20:35:50
 * ---------------------
 * Problem Link: https://www.codechef.com/START182D/problems/QBGI
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
        int boy = 0;
        int girl = 0;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if ((boy > girl * 2))
            {
                break;
            }
            count++;
            if (s[i] == 'B')
            {
                boy++;
            }
            else
            {
                girl++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}

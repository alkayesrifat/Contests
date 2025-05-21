/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: https://www.codechef.com/START185D/problems/RBLT
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
        int two = 0;
        int one = 0;
        int zero = 0;
        int N = n;

        while (N--)
        {
            int val;
            cin >> val;
            if (val == 1)
            {
                one++;
            }
            if (val == 2)
            {
                two++;
            }
            if (val == 0)
            {
                zero++;
            }
        }

        int dif = abs(one - two);

        if (dif == 0 && zero % 2 == 0 && zero >= dif)
        {
            cout << "YES" << endl;
        }
        else if (dif % 2 == 0 && zero % 2 == 0 && zero >= dif)
        {
            cout << "YES" << endl;
        }
        else if (dif % 2 != 0 && zero % 2 != 0 && zero >= dif)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
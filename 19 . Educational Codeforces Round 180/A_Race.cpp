/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/06/2025 (Monday)
 * Time       : 20:41
 * ---------------------
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
        int a, b, c;
        cin >> a >> b >> c;

        int ab = abs(a - b);
        int bc = abs(c - a);

        int maxx = max(b, c);
        maxx = max(maxx, a);
        int minn = min(b, c);
        minn = min(minn, a);

        // cout << maxx << " ";

        int found = 0;

        for (int i = 0; i <= maxx + 500; i++)
        {
            if (i != a)
            {
                if (ab > abs(b - i) && bc > abs(c - i))
                {
                    found = 1;
                    break;
                }
            }
        }
        if (found == 1)
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
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/07/2025 (Tuesday)
 * Time       : 20:44
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll a, b, k;
        cin >> a >> b >> k;

        if (a <= k && b <= k)
        {
            cout << 1 << endl;
            continue;
        }

        ll gc = __gcd(a, b);

        // cout << gc << endl;

        if (gc != 1)
        {
            ll aa = a / gc;
            ll bb = b / gc;

            if (aa <= k && bb <= k)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }

        else
        {
            // eda conform
            cout << 2 << endl;
        }
    }

    return 0;
}
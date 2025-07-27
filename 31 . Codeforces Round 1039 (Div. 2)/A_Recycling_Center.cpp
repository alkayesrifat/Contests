/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/07/2025 (Sunday)
 * Time       : 20:39
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
        ll n, c;
        cin >> n >> c;

        ll cnt = 0;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        ll cc = 1; 

        for (int i = 0; i < n; i++)
        {
            ll maxx = LLONG_MIN;

            for (int j = 0; j < n; j++)
            {
                if (v[j] != -9)
                {
                    ll sum;
                    if (v[j] <= c / cc)
                        sum = v[j] * cc;
                    else
                        sum = c + 1;

                    if (sum <= c)
                    {
                        maxx = max(v[j], maxx);
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (v[j] == maxx)
                {
                    v[j] = -9;
                    break;
                }
            }

            if (maxx == LLONG_MIN || maxx == -9)
            {
                cnt++;
            }

            cc *= 2; 
        }

        cout << cnt << endl;
    }

    return 0;
}

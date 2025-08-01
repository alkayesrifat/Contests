/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 20:12
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
        int n;
        cin >> n;

        int odd = 0;
        int even = 0;
        int oddin = 0;
        int evenin = 0;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            if ((i + 1) % 2 == 0)
            {
                evenin++;
            }
            else
            {
                oddin++;
            }
        }

        if (even == evenin && odd == oddin)
        {

            cout << "YES" << endl;
        }
        else if (even == oddin || evenin == odd)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
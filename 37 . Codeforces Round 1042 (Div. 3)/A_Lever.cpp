/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/08/2025 (Sunday)
 * Time       : 20:41
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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cnt = 0;
        

        for (int k = 0; k <= 10000; k++)
        {
            int d = 0;
            for (int i = 0; i < n; i++)
            {
                

                if (a[i] > b[i])
                {

                    a[i]--;
                    d = 1;
                    break;
                }
                else if (a[i] < b[i])
                {

                    a[i]++;
                }
            }
            cnt++;
            if (d == 0)
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
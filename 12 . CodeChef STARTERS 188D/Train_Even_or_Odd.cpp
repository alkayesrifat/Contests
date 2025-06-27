/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-28   20:38:07
 * Portfolio  : https://alkayesrifat.netlify.app/
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int first = 0;
        long long int second = 0;

        for (int i = 0; i < n; i = i + 2)
        {
            first = first + v[i];
        }

        for (int i = 1; i < n; i = i + 2)
        {
            second = second + v[i];
        }

        cout << max(first, second) << endl;
    }

    return 0;
}
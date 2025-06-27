/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
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
        double n, m, k;
        cin >> n >> m >> k;

        int a = ceil(k / n);
        int b = ceil(k / m);

        int aa = (n * a);
        int bb = m * b;

        int minn = min(aa, bb);

        int result = (n * m) - minn;

        cout << result << endl;
    }

    return 0;
}
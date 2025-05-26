/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-26   20:42:16
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
bool isFric(double number)
{
    return number != floor(number);
}
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

        if (isFric(sqrt(n)))
        {
            cout << -1 << endl;
        }
        else
        {
            int sq = sqrt(n);

            cout << 0 << " " << sq << endl;
        }
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b, p, q;
    cin >> r >> b >> p >> q;

    long long int a = (r * p);
    long long int bb = (b * q);

    cout << max(a, bb);

    return 0;
}
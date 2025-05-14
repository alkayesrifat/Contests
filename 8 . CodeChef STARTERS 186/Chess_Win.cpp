/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: https://www.codechef.com/START186D/problems/CHESSWIN
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (b - a) + 1 << endl;
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/07/2025 (Saturday)
 * Time       : 20:37
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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b)
        {
            cout << 0 << endl;continue;
        }
        

        if (a < b)
        {
            long long oneop = (b - a ) * x;
            
            int poss = 1;

            if (x < y || x <= y)
            {
                cout << oneop << endl;
                continue;
            }

            int odd1 = (a+1)/2;
            int odd2 = (b+1)/2;
            int odd = (odd2 - odd1);

            int op = (b - a) - odd;

            long long ans = (op*x) + (odd*y);


            long long re = min(ans,oneop);

            cout << re << endl;

            
        }
        else
        {
            int prev = a;
            int xoor = a^1;

            if(xoor == b){
                cout << y << endl;
            }
            else
            {
                cout << -1 << endl;
            }
            
        }
    }

    return 0;
}
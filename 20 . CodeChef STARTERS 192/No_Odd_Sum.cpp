/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/06/2025 (Wednesday)
 * Time       : 20:34
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

        int one = 0;
        int two = 0;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;
            if (v[i] == 2)
                two++;
        }

        if (one % 2 != 0)
        {
            cout << two << endl;
        }
        else if (one % 2 == 0 && two % 2 == 0)
        {
            if ((one / 2) < two)
            {
                cout << one / 2 << endl;
            }
            else if ((one / 2) > two)
            {
                cout << two << endl;
            }
            else
            {
                cout << two << endl;
            }
        }
        else if (one % 2 != 0 && two % 2 != 0)
        {
            cout << two << endl;
        }
        else if (one % 2 == 0 && two % 2 != 0)
        {
            if ((one / 2) < two)
            {
                cout << one / 2 << endl;
            }
            else if ((one / 2) > two)
            {
                cout << two << endl;
            }
            else
            {
                cout << two << endl;
            }
        }
        
        
    }

    return 0;
}
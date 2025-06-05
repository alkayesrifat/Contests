/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 2025-06-05 (Thursday)
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX;

        int paici = 0;

        for (int i = 0; i < n; i++)
        {
            set<int> st;
            for (int j = i; j < n; j++)
            {
                st.insert(v[j]);
                if (st.size() == 2)
                {
                    ans = min(ans, (j - i + 1));
                    paici = 1 ;
                    break;
                }
               
                
            }
        }

        if (paici)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        
    }

    return 0;
}
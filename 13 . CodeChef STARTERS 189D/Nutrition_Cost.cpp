/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 2025-06-05 (Thursday)
 * Time       : 21:25 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> vit(n);
        for (int i = 0; i < n; i++) {
            cin >> vit[i];
        }

        vector<int> cost(n);
        for (int i = 0; i < n; i++) {
            cin >> cost[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.count(vit[i]) == 0) {
                mp[vit[i]] = cost[i];
            } else {
                mp[vit[i]] = min(mp[vit[i]], cost[i]);
            }
        }


        set<int>st;
     
        vector<int> vals;
        for (auto x : mp) {


            vals.push_back(x.second); 


        }

        sort(vals.begin(), vals.end());

        int ans = 0; 

        int sum = 0;

        for (int i = 0; i < vals.size(); i++) { 


            sum += vals[i];

            int cren = (c * (i + 1)) - sum; 

            ans = max(cren, ans);

        }

        cout << ans << endl;


        
    }

    return 0;
}

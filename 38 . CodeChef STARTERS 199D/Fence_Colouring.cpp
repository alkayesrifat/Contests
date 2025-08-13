/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/08/2025 (Wednesday)
 * Time       : 20:44 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;
        set<int>st;
        map<int,int>mp;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.insert(val);
            v[i] = val;
            mp[val]++;
        }

        
        int maxx = mp[1] ;
        int num = 1;

        for(auto x : mp){
            if(x.second > maxx){
                maxx = x.second;
                num = x.first;
            }
        }

        if(num != 1){
            ll ans = n - maxx;
            ans++;
            cout << ans  <<endl;
        }
        else
        {
            cout << n -maxx << endl;
        }
        
        
        

    }

    return 0;
}
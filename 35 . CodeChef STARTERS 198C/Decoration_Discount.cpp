/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/08/2025 (Wednesday)
 * Time       : 20:33 
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
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int crr = v[i] + (v[i+1]/2);
            ans = min(crr,ans);
            
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans,(v[i]+v[j]));
            }
            
        }

        cout << ans << endl;
        
        
        
        
        

    }

    return 0;
}
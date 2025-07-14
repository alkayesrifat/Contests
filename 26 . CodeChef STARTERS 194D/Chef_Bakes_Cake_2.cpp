/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 20:37 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;cin >> n ;
        vector<int>a(n);
        vector<int>b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long int cnt = 0 ;

        for (int i = 0; i <n; i++)
        {
            if (a[i]> b[i])
            {
                cnt = cnt + (a[i]-b[i]);
            }
            
        }

        cout << cnt << "\n";
        
        
        
    }
    

    return 0;
}
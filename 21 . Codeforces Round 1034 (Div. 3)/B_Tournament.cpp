/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/07/2025 (Tuesday)
 * Time       : 21:00 
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
        int n , j , k ;
        cin >> n >> j >> k ;

        int minn = INT_MAX;
        int maxx = INT_MIN;

        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            minn = min(minn,v[i]);
            maxx = max(maxx,v[i]);
        }

        
        int move = n - k;


        int obosisto = ((n-2));

        // cout << obosisto << endl;

        if (obosisto >= move)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(v[j -1] == maxx ){
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        
        
        
        
        
        
    }
    

    return 0;
}
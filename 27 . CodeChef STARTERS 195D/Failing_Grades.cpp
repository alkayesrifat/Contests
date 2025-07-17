/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/07/2025 (Wednesday)
 * Time       : 20:33 
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
        int n ;
        cin >> n ;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int pos = 0 ;
        int sum = 0 ;

        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
            if(sum / (i+1) < 40){
                pos = 1 ;
                break;
            }
        }
        if (pos == 1)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
        
    }
    

    return 0;
}
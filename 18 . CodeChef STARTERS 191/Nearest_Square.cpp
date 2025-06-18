/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/06/2025 (Wednesday)
 * Time       : 20:41 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>s;

    for (int i = 1; i <= 11 ; i++)
    {
        s.push_back(i*i);
    }
    

    int t ;
    cin >> t ;

    while (t--)
    {
        int n ; 
        cin >> n ;

        int maxx = INT_MIN;

        for (int i = 0; i < s.size(); i++)
        {
           if (s[i] <= n)
           {
                maxx = max(maxx,s[i]);
           }

           
        }
        cout << maxx << endl;
        

    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/06/2025 (Wednesday)
 * Time       : 20:47 
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
        int x , y ;
        cin >> x >> y ;


        if (__gcd(x,y) > 1)
        {
            cout << 0 << endl;
        }
        else if (__gcd(x,y+1) > 1 || __gcd(x + 1,y) > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        
        
        
        

        
        
    }
    

    return 0;
}
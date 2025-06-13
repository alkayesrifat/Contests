/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/06/2025 (Friday)
 * Time       : 11:58 
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

        cout << (2*n) -1 << endl;

        for (int i = 1; i < n; i++)
        {
            cout << i << " " ;

            cout << 1 << " ";

            cout << i << endl;

            cout << i << " " ;

            cout << i + 1 << " ";

            cout << n << endl;
        }

        cout << n << " " << 1 << " " << n << endl;
        
    }
    

    return 0;
}
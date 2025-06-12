/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/06/2025 (Thursday)
 * Time       : 20:45 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n ,  k ;
        cin >> n >> k ;


        int zeroo = n - k;

        for (int i = 0; i < zeroo; i++)
        {
            cout << "0";
        }

        for (int i = 0; i < k; i++)
        {
            cout << '1';
        }

        cout << endl;
        
        
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/07/2025 (Wednesday)
 * Time       : 20:40 
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
        int a , b ;
        cin >> a >> b ;

        if(b == 0 && a == 0){
            cout << "NO" << endl;
        }
        else if (a > 0 && b > 0)
        {
            if (b % a == 0)
            {
                cout << "YES" << endl;

            }
            else
            {
                cout << "NO" << endl;
            }
            
            
        }
        else if (a == 0 && b > 0)
        {
            cout << "NO" << endl;
        }
        else if (a > 0 && b == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
        
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/08/2025 (Friday)
 * Time       : 20:02 
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

    ll a , b , c;
    cin >> a >> b >> c;

    ll have = b * c;

    if (have < a)
    {
        cout << "Rip you Po!" ;
    }
    else
    {
        int val = a / c;

        ll v = c * val;

        if(v == a){
            cout << val ;
        }
        else
        {
            cout << val+1;
        }
        
    }
    
    

    return 0;
}
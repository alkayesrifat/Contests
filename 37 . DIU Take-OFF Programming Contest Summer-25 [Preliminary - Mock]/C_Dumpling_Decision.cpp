/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/08/2025 (Friday)
 * Time       : 20:13 
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

    ll a , b ;
    cin >> a >> b;

    if (a > b)
    {
        ll val = a * b ;
        cout << val;
    }
    else
    {
        ll val = a + b;
        cout << val ;
    }
    
    

    return 0;
}
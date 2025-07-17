/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/07/2025 (Wednesday)
 * Time       : 20:31 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,  b, c ;
    cin >> a>> b >> c;

    if(a >= (b+c)){
        cout << a - (b+c);
    }
    else
    {
        cout << a-(b+c);
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 18:19 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n  , l  , r ;
    cin >> n >> l >> r;

    int cnt = 0 ;

    while (n--)
    {
        int a , b ;
        cin >> a >> b;
        if(a <= l && b >= r){
            cnt++;
        }
    }

    cout << cnt;
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/06/2025 (Saturday)
 * Time       : 18:05 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;

    vector<int>v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int k ;cin >> k ;

    int cnt = 0 ;


    for (int i = 0; i < n; i++)
    {
        if(v[i]>= k){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
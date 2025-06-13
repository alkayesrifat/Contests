/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int t ;
    cin >> t;
    
    while(t--){
        int n , a , b , c  , d;
        cin >> n >>a >> b >> c >>d ;
        int ans = 0;
        
        for(int i = 0 ; i <= n ; i++){
            
            ans = max(ans,((a*i) + (b*(n-i)) + (c * i*(n-i)) ));
            ans = max(ans,((a*i) + (b*(n-i)) + (d * i*(n-i)) ));
            
        }
        cout << ans << endl;
    }

    


    return 0;
}

/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/11/2025 (Saturday)
 * Time       : 18:02 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>// - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a , b, c ;
    cin >> a>> b>>c;

    if(b > a){
        cout <<"No" << endl;
    }
    else
    {
        int pos = 0 ;

        for(ll i  = 0 ; i <= 1000 ; i++){

            ll t = a + i ;
            ll x = ((b + i) * c);

            if( t ==x ){
                pos = 1;
            }
        }
        if(pos == 1){
            cout <<"Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/10/2025 (Saturday)
 * Time       : 18:32 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a , b , c, d ;
    cin >>a >> b >> c >> d;

    ll ans = 0;

    while (d >= 1)
    {
        if(d >b){
            ans+=(a*b);
            d-=b;
        }
        else if (d == b)
        {
            ans+=(a*b);
            d-=b;
        }
        else
        {
            ans+=(a*d);
            d-=b;
        }
        
        

        d-=c;
    }

    cout << ans;
    

    return 0;
}
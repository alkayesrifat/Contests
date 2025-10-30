/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/10/2025 (Wednesday)
 * Time       : 20:33 
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

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        ll a, b ;
        cin >>a  >> b;

        ll maxx = 0;

        ll sum = 0 ; 
        int cnt = 0 ;
        for(ll i = a ; i >=1 ; i--){
            sum+=i;cnt++;
            ll cost = (cnt * b);
            ll prof = (sum - cost);
            maxx = max(prof,maxx);
        }
        cout << maxx << endl;


    }

    return 0;
}
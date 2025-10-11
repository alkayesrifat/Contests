/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/10/2025 (Saturday)
 * Time       : 18:14 
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

    int n ;
    cin >> n;

    ll ans = 1 ;


    for(int i  = 1 ; i < n ; i++){

        string tem = to_string(ans);

        int crr = 0 ;

        for(int j  = 0 ; j < tem.size() ; j++){

            int t = tem[j] - '0';
            crr+= t ;
        }
        ans+=crr;


    }

    cout << ans ;
    return 0;
}
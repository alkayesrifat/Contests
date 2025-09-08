/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/09/2025 (Sunday)
 * Time       : 21:08 
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

    ll alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        ll a, b ;
        cin >> a >> b;

        vector<ll>v;

        v.push_back(1LL * (a*1) + b/1);
        v.push_back(1LL * (a*b) + b/b);

        if(b % 2 == 0){
            ll di = b / 2;
            v.push_back( 1LL * (a*di) + b/di);
        }
        if (b % 3 == 0)
        {
            ll di = b / 3 ;
            v.push_back(1LL *  (a*di) + b/di );
            /* code */
        }
        
        ll maxx = -1;

        for(auto x  : v){
            if(x % 2 == 0){
                maxx = max(x,maxx);
            }
        }

        cout << maxx << endl;




    }

    return 0;
}
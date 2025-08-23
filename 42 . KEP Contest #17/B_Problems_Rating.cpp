/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/08/2025 (Saturday)
 * Time       : 20:41 
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

    vector<ll>v(7);

    map<int,ll>mp;

    mp[0] =10; 
    mp[1] =30; 
    mp[2] =75; 
    mp[3] =200; 
    mp[4] =500; 
    mp[5] = 3000; 
    mp[6] = 50000; 

    ll sum = 0 ;

    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
        ll cal  = v[i] * mp[i];
        sum +=cal;
    }
    cout << sum ;
    


    return 0;
}
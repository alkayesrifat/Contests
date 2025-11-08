/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/11/2025 (Saturday)
 * Time       : 18:37 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pbds tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll w;
    cin >> w;

    int n ;
    cin >> n ;

    vector<int>v(n);

    map<int,int>mp;

    for(int i  = 0 ; i < n ; i++){

        cin >> v[i];
        mp[i+1] = v[i] ;

    }

    int q ;
    cin >> q;

    map<int,int>nici;

    while (q--)
    {
        int val;
        cin >> val;

        if(nici[val] == 0){
            w+=mp[val];
            cout << w << endl;
            nici[val] = 1;
        }
        else
        {
            w-=mp[val];
            cout << w << endl;
            nici[val] = 0;
        }
        
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/10/2025 (Wednesday)
 * Time       : 20:44 
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
        int n ;
        cin >> n ;

        map<int,vector<int>>mp;

        vector<int>pl;
        set<int>sc;

        for(int i  = 1 ; i <= n ; i++){
            pl.push_back(i);
            sc.insert(gcd(i,n));

            mp[gcd(i,n)].push_back(i);

        }

        

        // for(auto [x,z]  : mp){

        //     cout << x << " - ";
        //     for(auto y : z){
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }

        vector<int>fi;

        for(auto x : sc){
            fi.push_back(x);
        }

        sort(fi.rbegin(),fi.rend());

        for(auto x : fi){

            for(auto y : mp[x]){
                cout << y << " ";
            }

        }
        cout << endl;

    }

    return 0;
}
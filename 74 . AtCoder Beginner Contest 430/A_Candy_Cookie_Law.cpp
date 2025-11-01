/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/11/2025 (Saturday)
 * Time       : 18:00 
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

    int a , b  , c , d ;
    cin >>a >> b >>c >>d;

    if(c >= a){
        if(d >= b){
            cout << "No";
        }
        else
        {
            cout << "Yes" ;
        }
        
    }
    else
    {
        cout << "No" << endl;
    }
    

    return 0;
}
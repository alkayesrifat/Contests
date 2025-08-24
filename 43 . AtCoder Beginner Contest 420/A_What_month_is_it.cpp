/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/08/2025 (Sunday)
 * Time       : 18:01 
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

    int a , b ;
    cin >> a >> b ;

    for(int i  = 1 ; i <= b;i++){
        if(a == 12){
            a = 0;
        }
        a++;
        if(a == 12){
            a = 0;
        }
    }
    
    if(a == 0){
        cout << 12 << endl;
    }
    else{
        cout <<a << endl;
    }

    return 0;
}
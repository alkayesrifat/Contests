/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/10/2025 (Tuesday)
 * Time       : 14:45 
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
        int n ;cin >> n ;
        set<int>st;
        for( int i = 0 ; i < n ; i++){
            int val;
            cin >> val;
            st.insert(val);
        }

        int val = 0 ;
        for(auto  x : st){
            if(x != val){
                break;
            }
            val++;
        }

        cout << val << endl;
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/10/2025 (Tuesday)
 * Time       : 20:35 
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
        vector<int>v(4);

        for(int i  = 0 ; i < 4 ; i++){
            cin >> v[i];
        }
        int soman = 1 ;

        for(int i  = 1 ; i < 4 ;i++ ){
            if(v[i] != v[0]){
                soman = 0 ;
            }
        }

        if(soman == 1){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/09/2025 (Sunday)
 * Time       : 20:47 
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
        vector<int>v(n);
        map<int,int>mp;

        

        for(int i = 1 , j = n; i <= n ; i++,j--){

            mp[i] = j;

        }
       
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(int i = 0 ; i < n ; i++){
            v[i] = mp[v[i]];
        }


        for(auto x  : v){
            cout << x << " ";
        }
        cout << endl;
        
        
        

    }

    return 0;
}
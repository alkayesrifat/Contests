/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/01/2026 (Sunday)
 * Time       : 20:42 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>// - Use 'less<T>' for set, 'less_equal<T>' for multiset
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

        for(int i = 0  ; i < n ; i++){
            cin >> v[i];
        }
        int amra = n;int ind = -1;
        
        for(int i =0 ; i < n ; i++){

            if(v[i] != amra){
                ind = i;

                break;
            }
            amra--;

        }
        if(ind == -1){
            for(auto x  : v){
                cout << x<< " ";
            }
            cout << endl;
            continue;
        }


        // cout << ind << endl;
        int maxx = INT_MIN;
        int indm = -1;
        for(int i  = ind ; i < n ; i++){

            if(v[i] > maxx){
                maxx = v[i];
                indm = i;
            }

        }

        for(int i  = 0 ; i < ind;i++){
            cout << v[i] << " ";
        }
        for(int i  = indm ; i >= ind;i--){
            cout << v[i] << " ";
        }
        for(int i  = indm+1 ; i < n;i++){
            cout << v[i] << " ";
        }
        cout << endl;


    }

    return 0;
}
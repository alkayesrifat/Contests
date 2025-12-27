/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/12/2025 (Saturday)
 * Time       : 20:38 
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
        string s ;
        cin >> s;

        int y  = 0 ;
        int n = 0 ;

        for(auto x : s){
            if(x == 'Y'){
                y++;
            }
            else{
                n++;
            }
        }
        // cout << n << " " << y << endl;

        if( y >= 2){
            cout <<"NO" << endl;
        }
        else{
            cout <<"YES" << endl;
        }



    }

    return 0;
}
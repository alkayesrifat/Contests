/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/12/2025 (Wednesday)
 * Time       : 20:34 
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
        int cnt = 0 ;

        string s ;
        cin >> s;
        int one = 0 ;
        int zero = 0 ;
        for(auto x  : s){
            if( x == '1'){
                one++;
            }
            else{
                zero++;
            }
            if(one > zero ){
                cnt++;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/12/2025 (Saturday)
 * Time       : 18:03 
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

    int n ;
    cin >> n ;
    vector<int>v(n);

    

    for( int i  = 0 ; i < n  ; i ++){
        cin >> v[i];
        
    }

    vector<ll>pr(n);
    pr[0] = v[0];

    for(int i = 1 ; i < n ; i++){
        pr[i] = v[i] + pr[i -1];
    }

    ll ans = 0 ; 

    for(int i  = 0; i < n ; i++){
        for(int j = i +1 ; j < n  ; j++){

            ll sum = 0 ;

            if(i == 0){
                sum = pr[j];
            }
            else{
                sum = pr[j] - pr[i - 1];
            }

            int cnt = 0;

            for(int k  = i ; k <= j ; k++){
                if(sum % v[k] == 0){
                    
                    cnt++;
                }
            }
            // cout << i << " " << j  << " " << sum<< endl;
            
            if(cnt == 0){
                ans++;
            }

        }
    }
    cout << ans << endl;

    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 26/11/2025 (Wednesday)
 * Time       : 20:59 
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


        int ans = 0 ; 

        for(int i = 1 ; i <= n ; i++){

            if(i % 2  == 0){

                
                int cal = n -  i ;
                
                
                
                if(cal >= 2){
                    cal--;
                    // cout << i <<" " << cal << endl;
                    ans+=cal;
                }

            }
        }
        cout << ans << endl;

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/09/2025 (Wednesday)
 * Time       : 20:37 
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
        ll n;
        cin >> n ;

        if(n % 2 ==0){
            n = n / 2 ;
            ll ans = n * 200;
            cout << ans << endl;
        }
        else
        {
            ll ans;
            if(n == 1){
                ans = 200;
            }
            else
            {
                n--;

                n = n /2;
                ans = n * 200;
                ans+=100;
                
            }
            

            

            cout << ans << endl;
        }
        

    }

    return 0;
}
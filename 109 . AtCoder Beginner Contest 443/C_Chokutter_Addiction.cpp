/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/01/2026 (Saturday)
 * Time       : 18:32 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>// - Use 'less<int>' for set, 'less_equal<int>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n , k ;
    cin >> n >> k;

    vector<ll>v(n+1);

    for(int i  = 0 ; i < n ; i++){
        cin >> v[i];
    }

    v[n] = k;

    ll last = v[0];

    ll sum = v[0];


    ll khulbo = last + 100;

    for(int i = 1 ; i <= n ; i++){

        if(v[i]>=khulbo){
            sum+=(v[i]-khulbo);
            last = v[i];
            khulbo = last + 100;
        }
        

    }

    cout << sum ;



    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/10/2025 (Wednesday)
 * Time       : 20:53 
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
        int n , m , k ;
        cin >> n >> m >> k;

        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        m = m + (k * 100);


        sort(v.rbegin(),v.rend());

        
        for(int i  = 0 ; i < k ; i++){
            v[i] = 0;
        }

        int cnt = 0 ;

        for(auto x : v){
            if(x > m ){
                cnt++;
            }
        }
        cout << cnt +1 << endl;

    }

    return 0;
}
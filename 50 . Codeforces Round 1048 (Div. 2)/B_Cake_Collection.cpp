/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/09/2025 (Monday)
 * Time       : 21:03 
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
        ll n , m ;
        cin >> n >>  m;

        vector<ll>v(n);
        for(int  i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if(m <= 0 )break;
            if( i == n-1){

                ll crr = v[i] * m;
                ans+=crr;
                m=m-m;

            }
            else
            {
                ll crr = v[i] * m;
                ans+=crr;
                m--;
            }
            
        }
        cout << ans << endl;



        
        
        
        

    }

    return 0;
}
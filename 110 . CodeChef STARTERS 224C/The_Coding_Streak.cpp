/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 04/02/2026 (Wednesday)
 * Time       : 20:30 
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

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        int n ;
        cin >> n ;

        vector<int>v(n);


        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
        
        }

        int ans = 0 ;
        int cnt = 0 ;
        for(int i  = 0 ; i < n  ; i++){

            if(v[i]>=1){
                cnt++;
                ans = max(ans,cnt);
            }
            else{
                cnt = 0;
            }

        }
        cout << ans << endl;
    }

    return 0;
}
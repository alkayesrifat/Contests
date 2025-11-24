/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/11/2025 (Sunday)
 * Time       : 16:03 
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
        ll n , x, y;
        cin >> n >> x >> y ;    x = abs(x);    y = abs(y);

        
        string s ;
        cin >> s;
        int fc = 0 ;
        
        
        if(x > n || y > n){
            cout <<"NO" << endl;
            continue;
        }
        
       
       

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '4'){
                fc++;
            }
        }


        if(fc == 0){
            cout << "YES" << endl;

        }
        else
        {

            ll maxx = n +  n ;

            ll num = 0;
            ll cnt = 0 ;
            for(ll i = n ; i>=0 ; i--){
                cnt++;
                if(cnt == fc){
                    num = i;
                }
            }
            int minn =num + n;

            ll sum = x + y ;

            if(sum <= maxx && sum >= minn){
                cout <<"NO" << endl;
            }
            else
            {
                cout <<"YES" << endl;
            }
            

         



            
        }
        
        

    }

    return 0;
}
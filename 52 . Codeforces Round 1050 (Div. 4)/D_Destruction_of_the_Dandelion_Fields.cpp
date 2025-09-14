/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/09/2025 (Saturday)
 * Time       : 22:08 
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
        int n;
        cin >> n ;
        vector<ll>v;

        int odd = 0 ;
        ll ans = 0 ;

        

        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if(val %  2 != 0){
                odd++;
                v.push_back(val);
            }
            else
            {
                ans+=val;
            }
            
        }



        if(odd >= 1){

            sort(v.rbegin(),v.rend());

            if(odd % 2 == 0){

                for(int i = 0 ; i < (odd / 2);i++){
                    ans+=v[i];
                }


            }
            else
            {
                if(odd == 1){
                    ans+=v[0];
                }
                else
                {
                    int ind = 0 ;
                    for(int i = 0 ; i < (odd / 2) + 1;i++){
                        ans+=v[i];
                        
                    }


                }
                
            }
            

            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        

        


        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/01/2026 (Tuesday)
 * Time       : 20:35 
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
        string s , p ;
        cin >>s >> p;

        if(s == p){
            cout <<"YES" << endl;
        }
        else{

            if(n == 1){
                cout <<"NO" << endl;
                continue;
            }

            if(n==2 && (p =="00" || p == "11")){
                cout << "NO" << endl;
                continue;


            }
            int one = 0 ;
            int zero = 0;
            for(auto x  : p){
                if(x == '1'){
                    one++;
                }
                else{
                    zero++;
                }
            }
            if(one == n || zero == n){
                cout <<"NO"<<endl;
            }
            else cout <<"YES" << endl;

            
            

        }

    }

    return 0;
}
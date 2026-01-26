/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/01/2026 (Sunday)
 * Time       : 20:36 
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
        int n , s , k;
        cin >> n >> s >> k ;

        ll sum = 0 ;

        for(int i = 0  ; i < n ; i++){
            int val;
            cin >> val;
            sum+=val;
        }
        if(sum > s){
            cout << "NO" << endl;
        }
        else if(sum == s){
            cout << "YES" << endl;
        }
        else{
            int ho = 0;
            while (sum < s)
            {
                if(sum == s){
                    ho = 1;
                }
                sum+=k;
                if(sum == s){
                    ho = 1;
                }
                /* code */
            }
            if(ho == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }

    }

    return 0;
}
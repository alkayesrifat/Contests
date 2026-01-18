/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/01/2026 (Saturday)
 * Time       : 20:45 
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
        cin >> n;

        int one = 0 ;
        int zero = 0 ;

        for(int i = 0 ; i < n ; i++){
            int val;
            cin >> val;
            if(val == 1){
                one++;
            }
            if(val == 0){
                zero++;
            }
        }

        if((one >= 1 && zero >= 1) || (zero == 1 && one == 0) ){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}
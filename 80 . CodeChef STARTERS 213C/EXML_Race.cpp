/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/11/2025 (Wednesday)
 * Time       : 20:32 
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

      
        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
            int a , b ;
            cin >> a >> b;

            ll cal = a / b;

            v[i] = cal;



        }
        int maxx = INT_MIN;
        int ind = -1 ;
        for(int i = n-1 ; i >=0 ; i--){

            if(v[i] >= maxx){
                maxx = v[i];
                ind = i;
            }

        }
        cout << ind +1<< endl;

    }

    return 0;
}
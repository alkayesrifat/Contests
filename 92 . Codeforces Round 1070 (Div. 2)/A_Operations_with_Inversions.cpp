/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/12/2025 (Thursday)
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
        int n ;
        cin>> n ;

        vector<int>v(n);

        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int cnt = 0 ;

        for(int i  = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i  < j && v[j] != -1){
                    if(v[i] > v[j]){
                        cnt++;
                        v[j] = -1;
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/11/2025 (Saturday)
 * Time       : 18:10 
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

    int n ;
    cin >> n ;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i  = 0 ; i < n ; i++){

        int paici = -1;

        for(int j = 0 ; j < i ;j++ ){

            if( v[j] > v[i] ){
                paici = j + 1 ;
            }

        }
        cout << paici << endl;
    }
    

    return 0;
}
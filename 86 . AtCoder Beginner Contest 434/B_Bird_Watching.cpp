/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/11/2025 (Saturday)
 * Time       : 18:05 
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

    ll n , m ;
    cin >> n >>m ;

    map<int,double>mp;
    map<int,double>cnt;

    for(int i = 0 ; i < n ; i++){
        int a , b ;
        cin >>a >> b ;

        mp[a]+=b;
        cnt[a]++;
    }

    for(double i = 1 ; i <= m ;i++){
        double cal = mp[i] / cnt[i];
        cout << cal << endl;
    }



    return 0;
}
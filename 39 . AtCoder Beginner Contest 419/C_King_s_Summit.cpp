/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 19:01 
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

    int maxa = INT_MIN;
    int mina = INT_MAX;

    int maxb = INT_MIN;
    int minb = INT_MAX;

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int a , b ;
        cin >> a >> b;

        maxa = max(maxa,a);
        mina  = min(mina,a);
        maxb = max(maxb,b);
        minb = min(minb,b);
        

    }

    int suma = maxa + mina;

    suma = suma / 2 ;

    suma = maxa - suma;
    

    int sumb = maxb + minb;

    sumb = sumb/2;
    sumb = maxb - sumb;

    // cout << suma << " " << sumb ;


    ll ans = max(suma , sumb);

    cout << ans ;


    return 0;
}
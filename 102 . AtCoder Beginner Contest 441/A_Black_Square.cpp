/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/01/2026 (Saturday)
 * Time       : 18:02 
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

    int  a , b ;
    cin >>a >> b;

    int c , d;
    cin >> c>>d;

    int aa = a + 99;
    int bb = b + 99;

    if((c >= a && c <= aa) && (d >= b && d <= bb)){
        cout <<"Yes" << endl;


    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/12/2025 (Saturday)
 * Time       : 18:37 
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

    vector<int>v(n+1);

    cin >> v[1];
    int porbo = 1 + (v[1] - 1);

    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if(i <= porbo){
            int newporbo = i + (v[i] - 1);
            porbo = max(newporbo,porbo);
        }
    }
    cout << min(porbo,n) << endl;
    

    return 0;
}
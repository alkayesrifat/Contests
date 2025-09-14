/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/09/2025 (Sunday)
 * Time       : 18:18 
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

    int n ;
    cin >> n ;

    int cnt = 0 ;
    int one = 0 ;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == 1){
            one++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            break;
        }
        cnt++;
        
    }

    for(int i = n -1 ; i >=0 ; i--){

        if(v[i] == 1){
            cnt++;
            break;
        }
        cnt++;

    }

    if (one == 0 || one == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        
        cout << n - cnt << endl;
    }
    
    
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/10/2025 (Friday)
 * Time       : 20:42 
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

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s;

        int cnt = 0 ;

        vector<int>v;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '1'){
                v.push_back(i);
                cnt++;
            }
        }

        cout << cnt << endl;
        for(auto x : v){
            cout << x + 1 << " ";
        }
        cout << endl;

        

    }

    return 0;
}
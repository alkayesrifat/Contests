/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/10/2025 (Tuesday)
 * Time       : 20:48 
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

        int odd = 0 ;
        int even = 0 ;

        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
           
            cin >> v[i];
            if(v[i] % 2 == 0){
                even++;
            }
            else
            {
                odd++;
            }
            
        }

        if(odd != 0 && even != 0){
            sort(v.begin(),v.end());
            for(auto x  : v){
                cout << x<<" ";
            }
            cout << endl;
        }
        else
        {
            for(auto x  : v){
                cout << x<<" ";
            }
            cout << endl;
            
        }
        

    }

    return 0;
}
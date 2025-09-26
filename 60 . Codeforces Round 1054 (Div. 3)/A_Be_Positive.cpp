/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/09/2025 (Thursday)
 * Time       : 20:36 
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

        vector<int>v(n);
        int mione = 0 ;
        int zero = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            if(v[i] == -1)mione++;
            else if (v[i] == 0)
            {
                zero++;
            }
            
        }

        if(mione % 2 == 0){
            cout << zero << endl;
        }
        else
        {
            cout << zero + 2 << endl;
        }
        

    }

    return 0;
}
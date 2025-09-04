/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/09/2025 (Wednesday)
 * Time       : 20:35 
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
        ll a , b;
        cin >> a >> b;

        
        ll lage = 50 - a;

        int lim = b + 5;
        int pai = 0 ;
        for (int i = b; i <= lim; i++)
        {
            for(int j = b ; j <= lim ;j++){
                if(i+j == lage){
                    pai = 1;
                }
            }
        }
        

        if (pai )
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
        

        
        
        
        

    }

    return 0;
}
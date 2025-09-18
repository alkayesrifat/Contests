/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/09/2025 (Thursday)
 * Time       : 07:56 
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
        int n ,  m;
        cin >> n >> m ;

        string s ;
        cin >> s ;

        int z  = 0 , o = 0 ;

        for(auto x : s){
            if(x == '0'){
                z++;
            }
            else
            {
                o++;
            }
            
        }

        int baki = n - m ;

        int dif  = abs(z-o);

        if (baki < dif)
        {
            cout << "No" << endl;
        }
        else if ( (baki - dif) % 2 == 0 )
        {
            cout << "Yes" << endl;
            /* code */

        }
        else
        {
            cout << "No" << endl;
        }
        
        
        



        // cout << baki << " " << dif << endl;
        





    }

    return 0;
}
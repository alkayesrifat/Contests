/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/09/2025 (Saturday)
 * Time       : 20:39 
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
        int a,  b;
        cin >> a >> b;

        if(b == 1 || a == b || (a > b && (a-1==b))){
            cout << -1 << endl;
            continue;
        }
        else
        {
            int pos = 0 ;

            if (a > b)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            
            
        }
        

    }

    return 0;
}
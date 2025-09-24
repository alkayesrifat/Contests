/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/09/2025 (Wednesday)
 * Time       : 20:32 
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
        int n , k ;
        cin >> n >> k ;

        int cnt = 0 ;

        while (1)
        {
            int t = n;
            if((n+1)-k >k){
                cnt++;
                k = (n+1) - k;
            }
            else
            {
                break;
            }
            
        }

        cnt+=(n - k);
        cout << cnt << endl;
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/08/2025 (Friday)
 * Time       : 15:09 
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

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        int one = 0 ;
        int zero = 0 ;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if(i % 2 != val % 2  ){
                if(i % 2 == 0){
                    zero++;
                }
                else
                {
                    one++;
                }
                
            }
        }

        
        if (one == zero)
        {
            cout << one << endl;
            /* code */
        }
        else
        {
            cout << -1 << endl;
        }
        // cout << one << " "<< zero << endl;
        
        

    }

    return 0;
}
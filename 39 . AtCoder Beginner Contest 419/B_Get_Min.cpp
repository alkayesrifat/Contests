/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 18:04 
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
    

    multiset<int>st;
    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int val;

        cin >> val ;

        if (val == 1)
        {
            int x ;
            cin >> x ;

            st.insert(x);
        }
        else
        {
            cout << *st.begin() << endl;
            st.erase(st.begin());
        }
        
        

    }

    return 0;
}
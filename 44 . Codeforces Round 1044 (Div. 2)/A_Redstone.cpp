/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/08/2025 (Sunday)
 * Time       : 20:58 
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
        cin >> n;

        vector<int>v(n);

        set<int>st;

        for(int i  = 0 ; i <n ;i++){
            cin >> v[i];
            st.insert(v[i]);
        }


        if (st.size() < n)
        {
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
        
        


    }

    return 0;
}
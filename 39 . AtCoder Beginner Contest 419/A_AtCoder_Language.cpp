/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 18:00 
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

    string s ;
    cin >> s;

    if (s == "red")
    {
        cout <<"SSS" << endl;
    }
    else if (s == "blue")
    {
        cout << "FFF" << endl;
    }
    else if (s == "green")
    {
        cout << "MMM" << endl;
    }
    else
    {
        cout << "Unknown";
    }
    
    
    
    

    return 0;
}
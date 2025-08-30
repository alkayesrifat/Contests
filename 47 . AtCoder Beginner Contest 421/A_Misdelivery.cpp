/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/08/2025 (Saturday)
 * Time       : 18:01 
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

    int n ;cin >> n ;

    vector<string>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        /* code */
    }
    int num ;cin >> num;
    string s ;
    cin >> s;

    if(v[num-1] == s){
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl; 
    }
    

    return 0;
}
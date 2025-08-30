/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/08/2025 (Saturday)
 * Time       : 18:05 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull a , b ;
    cin >> a >> b ;

    vector<ull> v(10);
    v[0] = a;
    v[1] = b;

    for (int i = 2; i < 10; i++)
    {
        ull val = v[i-1] + v[i-2];

        string s = to_string(val);
        reverse(s.begin(), s.end());

        v[i] = stoull(s);  
    }

    cout << v[9] << endl;

    return 0;
}

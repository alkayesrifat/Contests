/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/08/2025 (Thursday)
 * Time       : 20:36 
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
        int a, b , c ,d;
        cin >> a >> b >> c >> d;

        c = c -a ;
        d = d -b;


        int amax = max(a,b);
        int amin = min(a,b);
        int bmax = max(c,d);
        int bmin = min(c,d);

        
        
        
        
        amin = amin*2;amin+=2;
        bmin = bmin*2;bmin+=2;


        // cout << amin << " " << amax << " " << bmin << " " << bmax << endl;
        
        if(amax > amin || bmax > bmin){
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        

    }

    return 0;
}
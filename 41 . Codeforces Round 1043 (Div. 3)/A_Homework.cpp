/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/08/2025 (Thursday)
 * Time       : 20:38 
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

        string a;
        cin >> a;

        int m ;cin >> m ;
        string b , c;
        cin >> b >> c;

        string dim ="";
        string vim = "";

        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'D')
            {
                dim+=b[i];
            }
            else
            {
                vim+=b[i];
            }
            
            
            
        }

        string r = vim;
        reverse(r.begin(),r.end());

        string ans = r + a + dim;

        cout << ans << endl;
        

    }

    return 0;
}
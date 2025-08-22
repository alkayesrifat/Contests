/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/08/2025 (Friday)
 * Time       : 15:02 
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
        string s ;
        cin >> s;

        string ans = "";

        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1]){
                ans.push_back(s[i]);
                i++;
            }
            else
            {
                ans.push_back(s[i]);
            }
            
            
        }
        ans.push_back(s[s.size()-1]);
        cout << ans << endl;
        

    }

    return 0;
}
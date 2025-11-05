/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/11/2025 (Wednesday)
 * Time       : 20:39 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pbds tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// - Use 'less<T>' for set, 'less_equal<T>' for multiset
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
        int n ;
        cin >> n ;

        string s ;
        cin >>s;

        int cnt = 0 ;
        int one = 0 ;

        for(int i  = 0 ; i < n ;i++){

            if(one == 0 && s[i] == '0'){
                cnt++;
            }
            else
            {
                one = 1;
            }
            

        }
        cout << cnt << endl;

    }

    return 0;
}
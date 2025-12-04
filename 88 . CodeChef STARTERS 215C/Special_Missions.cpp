/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/12/2025 (Wednesday)
 * Time       : 20:36 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>// - Use 'less<T>' for set, 'less_equal<T>' for multiset
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
        int n , c ;
        cin >> n >> c;

        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        string s ;
        cin >> s;

        ll sp = 0 ;
        ll nor = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                nor+=v[i];
            }
            else
            {
                sp+=v[i];
            }
            
        }

        if(sp > c && c <= nor){
            cout << (nor + sp) - c << endl;
        }
        else
        {
            cout << nor << endl;
        }
        


    }

    return 0;
}
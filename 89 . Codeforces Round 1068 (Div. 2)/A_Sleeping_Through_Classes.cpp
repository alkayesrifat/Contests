/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/12/2025 (Friday)
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
        int n ,k ;
        cin >> n >> k ;

        string s ;
        cin >> s;

        int cnt = 0 ;

        for(int i  = 0 ; i < n ; i++){
            if(s[i]== '1'){

                for(int j = 1 ; j <= k ;j++){
                    if(i + j < n ){
                        if(s[i+j] != '1'){
                            s[ i + j ] = '2';
                        }
                    }
                }

            }
            
        }
        cout << s<< " ";
       
       

        for(auto x  : s){
            if(x == '0'){
                cnt++;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}
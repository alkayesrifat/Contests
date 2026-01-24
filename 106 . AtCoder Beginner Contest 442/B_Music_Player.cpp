/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/01/2026 (Saturday)
 * Time       : 18:06 
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

    int play = 0;
    int vol = 0;

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        int a ;
        cin >> a;
        if(a == 1){
            vol++;
        }
        else if(a == 2){
            if(vol >= 1){
                vol--;
            }
        }
        else{
            if(play == 0){
                play = 1;
            }
            else{
                play = 0;
            }
        }

        if(play == 1 && vol >= 3 ){
            cout <<"Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }

    return 0;
}
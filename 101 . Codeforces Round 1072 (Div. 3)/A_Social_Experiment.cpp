/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/01/2026 (Monday)
 * Time       : 20:37 
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
        int n ;
        cin >> n ;


        if(n == 2 ){
            cout << 2 << endl;
        }
        else if(n==3){
            cout << 3 << endl;
        }
        else{

            if(n % 2 == 0){
                cout << 0 << endl;
            }
            else if( n % 3 == 0){
                if((n/3) % 2 == 0){
                    cout << 0 << endl;
                }
                else{
                    cout << 1 << endl;
                }
            }
            else{
                cout << 1 << endl;
            }

        }

    }

    return 0;
}
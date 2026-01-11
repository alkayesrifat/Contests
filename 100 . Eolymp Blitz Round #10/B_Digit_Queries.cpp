/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/01/2026 (Sunday)
 * Time       : 17:09 
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
        ll a , b ;
        cin >>a >> b;

        ll size = (a-1) + (a-1);
        size+=2;

        if(b > size){
            cout <<-1 << endl;
        }
        else{
            if(b == size){
                cout << 1 << endl;
            }
            else if(b <= (a-1)){
                cout << 9 << endl;
            }
            else if(b == a){
                cout << 8 << endl;
            }
            else{
                cout << 0 << endl;
            }

        }

    }

    return 0;
}
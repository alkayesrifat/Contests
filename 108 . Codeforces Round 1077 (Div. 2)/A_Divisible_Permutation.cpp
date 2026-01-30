/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/01/2026 (Thursday)
 * Time       : 20:44 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>// - Use 'less<int>' for set, 'less_equal<int>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        int n ;
        cin >> n ;

        vector<int>v(n+1);

        int N = n;
        
        for(int i = n ; i >= 1 ; i--){

            if(i % 2 != 0){
                v[i] = N;
                N--;
            }

        }
        for(int i = 1 ; i <=n ; i++){

            if(i % 2 == 0){
                v[i] = N;
                N--;
            }

        }

        for(int i  = 1 ; i <= n ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        
        



    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/01/2026 (Sunday)
 * Time       : 20:53 
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
        int n , q ;
        cin >> n >> q;
        vector<ll>a(n);

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        vector<ll>v(n);

        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
            v[i] = max(v[i] , a[i]);

        }

        ll maxx = v[n-1];

        for(int i = n - 1 ; i > 0 ; i--){

            maxx = max(maxx,v[i]); 
            v[i-1] = max(v[i-1],maxx);

        }

        for(int i  = 1;i < n ; i++){
            v[i] = v[i] + v[i-1];
        }

        while (q--)
        {
            int a , b ;
            cin >>a >> b;

            a--;b--;
            if(a == 0){
                cout << v[b] << " ";
            }
            else{
                cout << v[b] - v[a-1] << " ";
            }
        }
        cout << endl;
        



    }

    return 0;
}
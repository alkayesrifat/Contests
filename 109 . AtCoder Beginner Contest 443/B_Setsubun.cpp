/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/01/2026 (Saturday)
 * Time       : 18:04 
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

    ll n , m ;
    cin >> n >> m;

    int cnt = 0;

    ll sum = n;

    while (sum < m)
    {
       
        n++;
        cnt++;
        sum+=n;
        if(sum >= m)break;
    }

    cout << cnt << endl;
    
    

    return 0;
}
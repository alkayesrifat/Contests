/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/01/2026 (Friday)
 * Time       : 20:40 
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
        int n ,h , l;
        cin >> n >> h >> l;

        if(h > l){
            swap(h,l);
        }

        vector<int>v;

        int a = 0 ;
        int b = 0;
        for(int i  = 0 ; i < n ; i++){
            int val;
            cin >> val;
            if(val <= max(h,l)){
                v.push_back(val);
            }
            
        }
        n = v.size();
        int cnt = 0;


        for(int i  = 0 ; i < n ; i++){
            if(v[i] <= min(h,l)){
                cnt++;
            }
        }
   
        if(cnt >= (n /2)){
            cout << n / 2 << endl;
        }
        else{
            cout << cnt << endl;
        }

    }

    return 0;
}
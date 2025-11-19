/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/11/2025 (Wednesday)
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

        map<int,int>mp;

        for(int i =  0 ; i < n  ; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        ll cnt = 0 ;

        if(mp[2] > 1){

            cnt+=(mp[2] - 1);

        }
        if(mp[1]>= 1 && mp[3] >= 1){

            cnt+=(min(mp[1],mp[3]));

        }
        cout << cnt << endl;

    }

    return 0;
}
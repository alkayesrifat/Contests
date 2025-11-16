/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/11/2025 (Saturday)
 * Time       : 15:40 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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
        int n , m ;
        cin >> n >> m ;
        set<int>st;
        map<int,int>mp;

        for (int  i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.insert(val);
            mp[val] = 1;
        }
        for(int i = 0 ; i < m ; i++){
            int a , b, c;
            cin >> a>> b>>c;

            if(mp[a] == 1 && mp[b] == 1){
                st.insert(c);
                mp[c] = 1;
            }
            
        }
        cout <<st.size() << endl;
        
    }

    return 0;
}
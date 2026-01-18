/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/01/2026 (Saturday)
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
        int n;
        cin >> n;

        vector<int>v(n);
        map<int,int>mp;
        map<int,int>m;

        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
            if(i % 2 == 0){
                mp[v[i]] = 1;
                m[v[i]] = 2;
            }
            else{
                mp[v[i]] = 2;
                m[v[i]] = 1;
            }
        }


        int fals1 = 0;
        int fals2 = 0;

        sort(v.begin(),v.end());

        for(int i  = 0 ; i < n -1 ; i++){

            if(mp[v[i]] == mp[v[i+1]] ){
                fals1 = 1;
            }

            if(m[v[i]] == m[v[i+1]] ){
                fals2 = 1;
            }

        }

        if(fals1 == 0 || fals2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }



    }

    return 0;
}
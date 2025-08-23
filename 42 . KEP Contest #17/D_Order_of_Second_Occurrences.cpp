/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/08/2025 (Saturday)
 * Time       : 21:01 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;

    vector<int>v(n);
    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }


    vector<int>ans;

    for (int i = 0; i < n; i++)
    {
        if(mp[v[i]] == -1){
            ans.push_back(v[i]);
            mp[v[i]] = 0;
        }
        else if (mp[v[i]] == 1)
        {
            ans.push_back(v[i]);
        }
        else if (mp[v[i]] >= 2)
        {
            mp[v[i]]=  -1;
        }
        

        

    }

    cout << ans.size() << endl;

    for(auto x :ans){
        cout <<x << " ";
    }
    
    

    return 0;
}
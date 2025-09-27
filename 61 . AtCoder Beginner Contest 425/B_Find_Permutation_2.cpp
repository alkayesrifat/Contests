/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/09/2025 (Saturday)
 * Time       : 18:06 
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

    int pos = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if(v[i] != -1 && mp[v[i]]>1){
            pos = 0;
        }
    }
    
    if(pos == 0){
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;

        map<int,int>m;
        

        vector<int>p;

        for(int i = 1 ; i <= n ;i++){
            if(mp[i]<=0){
                p.push_back(i);
            }
        }

        // for(auto x  : p){
        //     cout << x << " ";
        // }

        for(int i  = 0 ; i < n ; i++){
            if(v[i] == -1){
                auto it = p.end();
                it--;
                cout << *it<< " ";
                p.pop_back();
            }
            else
            {
                cout << v[i] << " ";
            }
            
        }

        cout << endl;




        
        
        

    }
    


    return 0;
}
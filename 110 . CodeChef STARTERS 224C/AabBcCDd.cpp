/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 04/02/2026 (Wednesday)
 * Time       : 20:34 
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

        string s ;
        cin >> s;

        if(n==1){
            cout << 1 << endl;
            continue;
        }
        
        map<char,int>mp;

        for(int i = 0 ; i < n ; i++){
            s[i] = tolower(s[i]);
            mp[s[i]]++;
        }

        vector<int>v;
        for(auto x : mp){

            v.push_back(x.second);

        }
        
        sort(rall(v));

        if(v.size() >=2){
            cout << v[0] + v[1] << endl;
        }
        else{
            cout << v[0] << endl;
        }


    }

    return 0;
}
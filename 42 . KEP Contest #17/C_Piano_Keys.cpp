/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/08/2025 (Saturday)
 * Time       : 20:47 
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

    map<int,string>mp;
    mp[1] = "C";
    mp[2] = "C#";
    mp[3] = "D";
    mp[4] = "D#";
    mp[5] = "E";
    mp[6] = "F";
    mp[7] = "F#";
    mp[8] = "G";
    mp[9] = "G#";
    mp[10] = "A";
    mp[11] = "A#";
    mp[12] = "B";


    int val;
    cin >> val;
    int cnt = 1;

    int cole = 0 ;

    for(int i  = 1 ; i <= val;i++){
        cole++;
        if (cole ==12)
        {
            cnt++;
            cole = 0;
        }
        


    }
    if(cole == 0){
        cole = 12;
        cnt--;
    }

    cout << mp[cole] << cnt ;

    
    

    return 0;
}
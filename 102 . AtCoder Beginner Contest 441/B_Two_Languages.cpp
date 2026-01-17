/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/01/2026 (Saturday)
 * Time       : 18:07 
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

    int n , m ;
    cin >> n >> m ;

    string t , s;
    cin >> t >> s;

    map<char,int>tmp;
    map<char,int>smp;
    for(auto x : t){
        tmp[x] = 1;
    }
    for(auto x : s){
        smp[x] = 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        string ss;
        cin >> ss;

        int tc = 0;
        int sc = 0;

        for(auto x  : ss){
            if(tmp[x] == 1){
                tc++;
            }
            if(smp[x] == 1){
                sc++;
            }
        }

        if(tc > sc){
            cout <<"Takahashi" << endl;
        }
        else if(tc < sc){
            cout << "Aoki" << endl;
        }
        else{
            cout << "Unknown" << endl;
        }
    }
    

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/01/2026 (Wednesday)
 * Time       : 20:39 
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

        vector<int>v(n);

        int one = 0 ;
        int zero =  0 ;
        for (int i = 0; i <n; i++)
        {
            cin >> v[i];
            
        }

        if(v[0] == 1 || v[n-1] == 1){
            cout <<"Alice" << endl;
        }
        else{
            cout << "Bob"<<endl;
        }
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/11/2025 (Wednesday)
 * Time       : 20:45 
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
        int n ,  k ;
        cin >> n >> k ;

        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());


        int paici = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            if(v[i] > k && v[i+1] < k){
                paici = 1 ;
                break;
                
            }
            else if (v[i] < k && v[i+1] > k)
            {
                /* code */
                paici = 1 ;
                break;
            }
            
        }

        if(paici == 1){
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        

    }

    return 0;
}
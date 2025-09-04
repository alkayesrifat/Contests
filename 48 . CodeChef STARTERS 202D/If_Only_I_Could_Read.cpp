/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/09/2025 (Wednesday)
 * Time       : 21:30 
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

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        int n ;
        cin >> n ;

        vector<int>v(n);

        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int paici = 0 ;
        int a = 0 ;

        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i+1]){
                paici = 1;
                a = i;
                break;
            }
        }

        if (paici == 1)
        {
           cout << a+1 << " "<< a+2 << endl;
        } 
        else
        {
            cout << "-1" << endl;
        }
        
        
        

    }

    return 0;
}
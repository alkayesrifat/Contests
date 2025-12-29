/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/12/2025 (Monday)
 * Time       : 20:38 
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
        cin >> n;
        string s ;
        cin >> s;

        if(n == 4 && s == "2025"){
            cout << 1 << endl;
        }
        else
        {
            int flag = 0;
            int pocis = 0;
            for (int i = 0; i < n - 3; i++)
            {
                if(s[i] == '2' && s[i+1] == '0' && s[i + 2] == '2' && s[i+3] =='6' ){
                    flag = 1;
                    break;
                }
                if(s[i] == '2' && s[i+1] == '0' && s[i + 2] == '2' && s[i+3] =='5' ){
                    pocis = 1;
                    
                }
            }
            if(pocis == 1 && flag == 0){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }

            
        }
        

    }

    return 0;
}
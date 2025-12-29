/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/12/2025 (Monday)
 * Time       : 20:54 
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
        ll a , b ;
        cin >>a >> b ;
        ll sum = a+ b;

        int cnt = 0;

        ll ches = 1;

        int nici = 0 ;
        ll A = a;
        ll B = b;

        int cnt1 = 0;
        int cnt2 = 0;

        int ff = 1;
        

        while ( ches <= sum)
        {
            // cout << ches;
            
            
            if ( ches <= b && nici == 0){
                b-=ches;
                nici = 1;
                cnt1++;
            }
            else if(ches <= a && nici == 1){
                a-=ches;
                nici = 0;
                cnt1++;
            }

            
            if ( ches <= B && ff == 0){
                B-=ches;
                ff = 1;
                cnt2++;
            }
            else if(ches <= A && ff == 1){
                A-=ches;
                ff = 0;
                cnt2++;
            }
            
            ches = (long long int) ches * 2;
        }

        cout << max(cnt1,cnt2) << endl;

        
        
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/11/2025 (Friday)
 * Time       : 21:22
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> // - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alkayesrifat;
    cin >> alkayesrifat;
    while (alkayesrifat--)
    {
        ll n;
        cin >> n;

        int maxx = INT_MIN;

        vector<int> v(n);

        int cnt = 0;

        ll sum = 0 ;


        ll bakisum = 0;
        int one = 0 ;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            maxx = max(v[i], maxx);
            if (v[i] != 0)
            {
                cnt++;
                ll val = v[i] - 1;
                if(v[i] != 1){
                    
                    one++;
                    bakisum += val;
                }
            }
            sum+=v[i];

           
        }
        if(sum == n){
            cout << 1 << endl;
            continue;
        }

        if(bakisum >= n || abs(bakisum - n) == 1 ){
            cout << cnt << endl;
        }
        else
        {
            int compo = n - bakisum;
            cout << (cnt - compo )+ 1 << endl;
        }
        
        

    }

    return 0;
}
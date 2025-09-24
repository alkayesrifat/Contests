/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/09/2025 (Wednesday)
 * Time       : 17:42
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
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
        int n, m;
        cin >> n >> m;

        vector<int> v(m);

        int maxx = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            maxx = max(maxx, v[i]);
        }

        int noa = 0 ;

        for(int i = 0 ; i < m - 1 ;i++){
            if(v[i] != v[i+1] - 1){
                noa = 1;
                break;
            }
        }
        if(noa == 1){
            cout << 1 << endl;
            continue;
        }



        if (m == 2)
        {

            if (v[0] == 1 && v[1] == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                int val = n - maxx;

                cout << val + 1 << endl;
            }
        }
        else
        {

            int val = n - maxx;

            cout << val + 1 << endl;
        }
    }

    return 0;
}
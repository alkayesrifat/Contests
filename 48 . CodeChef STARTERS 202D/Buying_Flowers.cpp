/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/09/2025 (Wednesday)
 * Time       : 20:48
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
        ll val;
        cin >> val;

        ll three = 0;
        ll two = 0;

        if (val % 2 == 0)
        {
            three = (val / 6);

            val = val - (three * 6);

            three = three * 2;

            two = val / 2;

            cout << three * 5 + two * 4 << endl;
        }
        else
        {

            val -= 3 ;

            three = (val / 6);

            val = val - (three * 6);

            three = three * 2;

            two = val / 2;

            
            three++;

            cout << three * 5 + two * 4 << endl;


            
        }
    }

    return 0;
}
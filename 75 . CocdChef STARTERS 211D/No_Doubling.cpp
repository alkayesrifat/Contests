/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/11/2025 (Wednesday)
 * Time       : 20:46
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pbds tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
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
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
            mp[v[i]]++;
        }

        sort(v.begin(), v.end());

        if (n % 2 == 0)
        {

            for (int i = 0, j = n - 1; j >= 0, i < n; i++, j--)
            {

                if (i == j)
                {
                    break;
                }
                else if(i < (n/2) && j >= (n/2))
                {
                    cout << v[j] << " " << v[i] << " ";
                }
            }
        }
        else
        {
            for (int i = 0, j = n - 1; j >= 0, i < n; i++, j--)
            {

                if (i == j)
                {
                    break;
                }
                else if(i < (n/2) && j >= (n/2))
                {
                    cout << v[j] << " " << v[i] << " ";
                }
            }
            cout << v[(n-1)/2];
        }
        cout << endl;
    }

    return 0;
}
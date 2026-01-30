/**
 * In the name of Allah, the Most Gracious, the Most Merciful
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/01/2026 (Thursday)
 * Time       : 21:02
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> // - Use 'less<int>' for set, 'less_equal<int>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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

        string s;
        cin >> s;

        ll sum = 0;
        int cnt = 0;
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            else
            {
                if (one == 0)
                {
                    int val = ceil((cnt-1) / 3.0);
                    sum+=val;
                    sum++;
                }
                else
                {
                    int val = cnt / 3;
                    sum += val;
                    sum++;
                }

                cnt = 0;
                one = 1;
            }
        }

   
        if (one == 0)
        {

            cout << ceil(n / 3.0) << endl;
        }
        else if (cnt == 0)
        {
            cout << sum << endl;
        }
        else
        {

            cout << sum + ceil((cnt - 1) / 3.0) << endl;
        }
    }

    return 0;
}
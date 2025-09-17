/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/09/2025 (Wednesday)
 * Time       : 20:41
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;

        int cole = 0;

        if (n == 1 || n == 2)
        {
            cout << "YES" << endl;
            continue;
        }


        if (v[0] < v[1])
        {
            cole = 1;
        }
        else
        {
            cole = 2;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (cole == 2)
            {

                if (v[i] < v[i + 1])
                {
                    cnt++;
                    cole = 1;
                }
            }
            else
            {
                if (v[i] > v[i + 1])
                {
                    cnt++;
                    cole = 2;
                }
            }
        }

        int so = 1;

        for (int i = 1; i <= n; i++)
        {
            int sum = ((n * (n + 1)) / 2) - ((n - i) * ((n - i) + 1) / 2);


            int paici = 0 ;
            for(int j = 0 ; j < n ; j++){
                int s  = 0 ;
                int c = 0 ;
                for(int k = j ; k < n  ; k++){

                    c++;
                    s+=v[k];
                    if(c >= i)break;

                }
                if(sum == s){
                    paici = 1 ;
                }
            }
            if(paici ==0){
                so = 0 ;
                break;
            }
         
            
        }
        if (so == 0)
        {

            cout << "NO" << endl;
            /* code */
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}
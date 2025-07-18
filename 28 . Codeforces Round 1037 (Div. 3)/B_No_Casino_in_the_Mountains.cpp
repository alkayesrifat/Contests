/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/07/2025 (Thursday)
 * Time       : 20:40
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int r = 0;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0){
                sum++;
                if(sum == k ){
                    cnt++;
                    sum = 0 ;
                    i++;
                }
            }
            else
            {
                sum = 0 ;
            }
            
        }

        cout << cnt << endl;
        
    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/07/2025 (Wednesday)
 * Time       : 20:33 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;
        int odd = 0 ;
        int even = 0 ;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i %2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
                
                
            }
            
            
        }
        cout << odd << " " << even << endl;
        
    }
    

    return 0;
}
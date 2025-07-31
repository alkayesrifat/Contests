/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/07/2025 (Wednesday)
 * Time       : 20:34 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        int cnt = 0 ;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2 != 0)
            {
                /* code */
                cnt++;
            }
            
            /* code */
        }

        if(cnt == 1){
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
        

    }

    return 0;
}
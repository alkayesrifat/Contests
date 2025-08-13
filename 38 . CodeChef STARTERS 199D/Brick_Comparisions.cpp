/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/08/2025 (Wednesday)
 * Time       : 20:35 
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

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int crr = v[0];
        int cnt = 1 ;
        

        for (int i = 1; i < n; i++)
        {
            if(v[i] > crr){
                cnt=i+1;
                crr = v[i];
            }
        }
        
        cout << cnt << endl;
        

    }

    return 0;
}
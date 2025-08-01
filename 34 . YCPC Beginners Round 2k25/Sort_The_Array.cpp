/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 20:41 
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

        int boro = 0 ;
        int choto = 0 ;

        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i+1]){
                boro++;
            }
            
        }

        cout << boro << endl;
        
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/07/2025 (Thursday)
 * Time       : 20:39 
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

        ll sum = 0 ;
        int ze = 0 ;
        int one = 0;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if(v[i] == 0){
                ze++;
            }
            if(v[i] == 1){
                one++;
            }
            
        }
        int ind = 0 ;


        
            for (int i = 0; i < n; i++)
            {
                sum+=v[i];
            }
            
        

        cout << sum + ze<< endl;
        
        

        
        

    }

    return 0;
}
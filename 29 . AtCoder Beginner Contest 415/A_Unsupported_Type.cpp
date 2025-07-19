/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/07/2025 (Saturday)
 * Time       : 18:00 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x ;
    cin >> x;
    int a = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            a = 1;
            break;
        }
        
    }
    if (a  == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    
    
    

    return 0;
}
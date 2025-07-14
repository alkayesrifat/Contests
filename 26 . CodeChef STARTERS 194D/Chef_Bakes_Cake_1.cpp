/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 20:31 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b ;
    cin >> a>> b;

    int cost = a * 30;
    int prof = b*20;

    if (a == b)
    {
        cout << prof;
    }
    else
    {
        int cell = 50 * b;
        if (cell >= cost)
        {
            cout << cell - cost;
        }
        else
        {
            cout << -1*(cost - cell);
        }
        
        
    }
    
    

    return 0;
}
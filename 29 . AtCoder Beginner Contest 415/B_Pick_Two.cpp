/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/07/2025 (Saturday)
 * Time       : 18:04 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ;
    cin >> s;

    int cnt = 0 ;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] =='#' && cnt == 0){
            cnt++;
            cout << i+1 << ',';
        }
        else if (s[i] == '#' && cnt == 1)
        {
            cnt++;
            cout << i+1 << endl;
            cnt = 0 ;
        }
        
    }
    

    return 0;
}
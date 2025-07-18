/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/07/2025 (Thursday)
 * Time       : 20:36 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;
    while (t--)
    {
        string s ;
        cin >> s;
        char minn = '9';
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] < minn){
                minn = s[i];
            }
        }
        cout << minn << endl;
        
    }
    

    return 0;
}
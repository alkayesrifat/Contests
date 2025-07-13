/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 18:22 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;

    vector<pair<char,long long >>v;
    long long sum = 0 ;

    int lonng = 0;

    int N = n ;
    while (N--)
    {
        char a ;
        long long val ;
        cin >> a >> val;

        sum += val;

        if (sum > 100)
        {
            lonng = 1 ;
        }


        v.push_back({a,val});

    }

    if (lonng == 1)
    {
        cout  << "Too Long" << endl;
    }
    else
    {
        string s  = "";
        for(auto x : v){
            for (int i = 0; i < x.second; i++)
            {
                s+=x.first;
            }
            
        }

        cout << s ;
    }
    
    



    

    return 0;
}
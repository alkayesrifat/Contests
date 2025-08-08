/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/08/2025 (Thursday)
 * Time       : 20:45 
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
        map<int,int>mp;
        int mi = 0 ;

        for (int i = 0; i < n ; i++)
        {
            cin >> v[i];
            if(v[i] != -1){
                mp[v[i]]++;
            }
            else
            {
                mi++;
            }
            
        }

        if(mi == n ){
            cout << "YES" << endl;
            continue;
        }

        if(mp.size() == 1){
            if(mp[0]>= 1){
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            
        }
        else
        {
            cout << "NO" << endl;
        }
        


        

    }

    return 0;
}
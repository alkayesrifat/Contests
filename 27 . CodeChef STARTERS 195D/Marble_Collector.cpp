/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/07/2025 (Wednesday)
 * Time       : 20:37 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n , m ;
        cin >> n >> m ;

        vector<int>v(n);

        map<int,int>mar;
        for (int i = 1; i <= m; i++)
        {
            mar[i]++;
        }
        map<int,int>ace;
        

        for (int i = 0; i <n; i++)
        {
            cin >> v[i];
            ace[v[i]]++;
        }
        
        int cnt = 0;

        for(auto x : mar){
            if(ace[x.first] >= 1){
                cnt++;
            }
        }

        cout << m - cnt << endl;



    }
    

    return 0;
}
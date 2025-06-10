/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio: alkayesrifat.netlify.app
 * Date: 2025-06-08 (Sunday) 07:41
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t ;cin >>t;

    while(t--){
        int n ,  x;
        cin >> n >> x;

        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int paici = 0;

        for(int i = 0 ; i < n ;i++){

            if(v[i] == 1 && x == -1){
                paici = 1 ;
                break;
            }
            if(v[i] == 1){
                if(x > 0){
                    i = i + (x - 1);
                }
                x = -1;
            }

        }

        if(paici == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    

    return 0;
}
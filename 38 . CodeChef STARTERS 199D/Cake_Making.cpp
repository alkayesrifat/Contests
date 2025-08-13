/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/08/2025 (Wednesday)
 * Time       : 20:32 
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

    int a , b ;
    cin >> a >> b;

    int cnt = 0 ;

    for(int i  = 1 ; i <= a;i++){
        for(int j  = 1 ;j<= b;j++){
            if(i != j){
                cnt++;
            }
        }
    }

    cout << cnt ;

    return 0;
}
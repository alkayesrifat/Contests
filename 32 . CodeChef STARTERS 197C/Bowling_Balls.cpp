/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/07/2025 (Wednesday)
 * Time       : 20:31 
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
        int n , a , b ;
        cin >> n >> a >> b ;

        int cnt = 0 ;

        for (int i = 0; i <n; i++)
        {
            int val;
            cin >> val;
            if(val >= a && val <= b){
                cnt++;
            }
        }
        cout << cnt << endl;
        

    }

    return 0;
}
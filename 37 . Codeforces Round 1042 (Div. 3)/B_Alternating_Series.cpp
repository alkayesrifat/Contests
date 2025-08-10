/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/08/2025 (Sunday)
 * Time       : 20:55 
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

        int cole = -1 ;

        if(n == 2){
            cout <<"-1 2"<<endl;
            continue;
        }


        
        if(n % 2 == 0){
            for(int i  = 0 ; i < n-1 ; i++){
                cout << cole << " ";
                if(cole == -1){
                    cole = 3;
                }
                else{
                    cole = -1;
                }
            }
            cout << 2 << endl;
        }
        else
        {
            for(int i  = 0 ; i < n ; i++){
                cout << cole << " ";
                if(cole == -1){
                    cole = 3;
                }
                else{
                    cole = -1;
                }
            }
        }
        

    }

    return 0;
}
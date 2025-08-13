/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/08/2025 (Wednesday)
 * Time       : 21:11 
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
        int  n ;
        cin >> n ;

        int kori = 0 ;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < n ;j++){
                cout << kori << " ";
                kori++;
                if(kori % n == 0){
                    kori = 0;
                }
                
            }
            kori++;
            cout << endl;
            
            
            
        }
        

    }

    return 0;
}
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 2025-06-05 (Thursday)
 * Time       : 20:31 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b ;
    cin>> a >> b;

    a++;

    a = a * 4;
    b = b * 3;

    int sum = a + b ;

    int lakbe = 0 ;

    while (sum > 0)
    {
        lakbe++;
        sum = sum - 8;
    }

    cout << lakbe;
    

    return 0;
}
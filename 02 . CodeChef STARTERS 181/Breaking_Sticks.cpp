/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-09   20:50:41
 * ---------------------
 * Problem Link: https://www.codechef.com/START181D/problems/BRKSTICK
 */

#include<bits/stdc++.h>
using namespace std;


int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    int n ;
	    cin >> n ;
	    
	    long long int result = 0 ;
	    
	    for(int i = 0 ; i < n ; i++){
	        int num;
	        cin >> num ;
	        result = result + (num - 1);
	    }
	    
	    cout << result << "\n";
	    
	    
	    
	    
	    
	    
	    
	}

}




/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/07/2025 (Sunday)
 * Time       : 20:42 
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
        int n ;cin >> n ;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int>sor ;
        sor = v;

        sort(sor.begin(),sor.end());

        int match = 1 ;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != sor[i])
            {
                match = 0 ;
                break;
            }
            
        }

        if(match == 1){
            cout << "NO" << endl;
            continue;
        }

        int one = -90;
        int two = -90;


        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    one = v[i];
                    two = v[j];
                    break;
                }
                
            }
            
            
        }

        if (two != -90 && one != -90)
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << one << " " << two << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
            
            
        }
        
        
        
        
        
    }
    

    return 0;
}
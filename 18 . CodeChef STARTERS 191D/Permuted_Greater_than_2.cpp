/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/06/2025 (Wednesday)
 * Time       : 21:05
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int z, o, t;
        cin >> z >> o >> t;

        if (t > z)
        {
            cout << "Yes" << endl;
        }
        else if(z > t){
            
            if(z == t + 1){
                if(o == 0){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
            }
            else{
                cout << "No" << endl;
            }
            
        }
        else{
            
            cout << "Yes" << endl;
        }
        

        
    }


    return 0;
}
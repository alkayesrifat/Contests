/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/06/2025 (Saturday)
 * Time       : 18:11 
 * ---------------------
 */


 
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;

    int q;
    cin >>q;

    vector<int>v(n);

    vector<int>ans;

    map<int,int>mp;

    for (int i = 1; i <= n; i++)
    {
        mp[i] = 0 ;
    }
    




    for (int i = 0; i < q ; i++)
    {
        int val;
        cin >> val;

        if(val != 0){
            v[val - 1] = 1;
            ans.push_back(val);
            mp[val]++;

        }
        else
        {
            vector<pair<int, int>> temp(mp.begin(), mp.end());
            
            sort(temp.begin(), temp.end(), cmp);
            
            int first = temp[0].first;
            ans.push_back(first);
            mp[first]++;
        }
        
    }

    for (int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
    

    
    

    return 0;
}
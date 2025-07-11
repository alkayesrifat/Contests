
#include<bits/stdc++.h>
using namespace std;


bool cmp(const pair<int,int>&a ,const pair<int,int>&b){
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
    
    
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>>v;
        while (n--)
        {
            int a , b ;
            cin >> a >> b ;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cmp);
        

        for(auto x : v){
            cout << x.first << " " << x.second << endl;
        }
        
    }
    

    return 0;
}

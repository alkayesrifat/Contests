#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"



int main(){

    int test_case ;
    cin >> test_case;

    while(test_case--){
        string s ;
        cin >> s;
        int cnt =  0;
        int temp = 0 ;
        int n = s.size();
        bool INVALID=false;
        for(int i  =  0; i < n ; i++){
            if(s[i]=='\\' && s[i+1]=='0'){
                
                break;
            }else if(s[i]=='\\' && s[i+1]=='\\' && i<n-1){
                cnt++;
                i++;
            }else if(s[i]=='\\' && i==n-1){
                INVALID=true;
                break;
            }else if(s[i]=='0'){
                cnt++;

            }
        }
        if(INVALID) cout<<"INVALID"<<endl;
        else cout << cnt << endl;



    }

    
    return 0;
}

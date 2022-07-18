#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>n;
    cin>>s;
    int cnt=0;
    for(i=0;i<n;i++){
        if(s[i]!='?'){
            cnt++;
        }
    }
    if(cnt){
        for(i=1;i<n;i++){
            if(s[i]=='?'){
                if(s[i-1]=='R'){
                    s[i]='B';
                }
                if(s[i-1]=='B'){
                    s[i]='R';
                }
            }
        }
        for(i=n-2;i>=0;i--){
            if(s[i]=='?'){
                if(s[i+1]=='R'){
                    s[i]='B';
                }
                if(s[i+1]=='B'){
                    s[i]='R';
                }
            }
        }
    }
    else{
        for(i=0;i<n;i++){
            if(i%2){
                s[i]='B';
            }
            else{
                s[i]='R';
            }
        }
    }
    cout<<s;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
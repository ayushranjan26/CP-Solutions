#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    string s;
    cin>>s;
    n=s.size();
    int f=0;
    for(i=0;i<n;i++){
        if(i%3==0){
            if(s[i]!='o'){
                f++;
                break;
            }
        }
        else if(i%3==1){
            if(s[i]!='x'){
                f++;
                break;
            }
        }
        else{
            if(s[i]!='x'){
                f++;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i%3==0){
            if(s[i]!='x'){
                f++;
                break;
            }
        }
        else if(i%3==1){
            if(s[i]!='x'){
                f++;
                break;
            }
        }
        else{
            if(s[i]!='o'){
                f++;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i%3==0){
            if(s[i]!='x'){
                f++;
                break;
            }
        }
        else if(i%3==1){
            if(s[i]!='o'){
                f++;
                break;
            }
        }
        else{
            if(s[i]!='x'){
                f++;
                break;
            }
        }
    }
    //cout<<f;
    if(f<3){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}

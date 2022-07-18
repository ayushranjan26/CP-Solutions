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
    int i,j,n,m;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c0=0;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            c1++;
        }
        else{
            c0++;
        }
    }
    if(c1==1||c0==1){
        cout<<"Alice";
    }
    else if(c1==n||c0==n){
        cout<<"Bob";
    }
    else{
        if(c1%2==c0%2){
            cout<<"Bob";
        }
        else{
            cout<<"Alice";
        }
    }
    return;
}

int32_t main(){
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

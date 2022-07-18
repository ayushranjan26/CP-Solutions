#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,w,x,y,z;
    cin>>w>>x>>y>>z;
    w+=y*z;
    if(w<x){
        cout<<"unfilled";
    }
    else if(w==x){
        cout<<"filled";
    }
    else{
        cout<<"overflow";
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

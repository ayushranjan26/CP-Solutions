#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"0";
        return;
    }
    if(x<y){
        cout<<y-x;
        return;
    }
    if(y<x){
        if((x-y)%2==0){
            cout<<(x-y)/2;
        }
        else{
            cout<<(x-y+1)/2+1;
        }
        return;
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

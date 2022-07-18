#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;
int n,a[102],b[102],x;
int memo[102][10004];
bool dp(int idx,int x){
    if(idx==n){
        if(x==0){
            return true;
        }
        else{
            return false;
        }
    }
    else if(x<0){
        return false;
    }
    else if(memo[idx][x]!=-1){
        return memo[idx][x];
    }
    else{
        bool f=false;
        f|=dp(idx+1,x-a[idx]);
        f|=dp(idx+1,x-b[idx]);
        return memo[idx][x]=f;
    }
}
void solve(){
    int i,j;
    cin>>n>>x;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    memset(memo,-1,sizeof(memo));
    if(dp(0,x)){
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

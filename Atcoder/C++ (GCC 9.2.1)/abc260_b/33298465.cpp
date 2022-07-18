#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n,x,y,res=0;
int dp(int col,int lev){
    if(lev==1){
        if(col==1){
            return 1;
        }
        return 0;
    }
    else{
        int res=0;
        if(col==0){
            res+=dp(0,lev-1);
            res+=x*dp(1,lev);
        }
        else{
            res+=dp(0,lev-1);
            res+=y*dp(1,lev-1);
        }
        return res;
    }
}

void solve(){
    int i,j;
    cin>>n>>x>>y;
    cout<<dp(0,n);

    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        tc++;
    }
    return 0;
}

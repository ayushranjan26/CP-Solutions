#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int vis[9][9],x2,y2;
bool dp(int x,int y,int cnt){
    if(x<1||x>8||y<1||y>8||vis[x][y]!=-1){
        return false;
    }
    else if(x==x2&&y==y2){
        if(cnt%2==0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        bool res=false;
        vis[x][y]=1;
        res=dp(x+2,y+1,cnt+1)|dp(x+2,y-1,cnt+1)|dp(x-2,y+1,cnt+1)|dp(x-2,y-1,cnt+1);
        res|=dp(x+1,y+2,cnt+1)|dp(x-1,y+2,cnt+1)|dp(x+1,y-2,cnt+1)|dp(x-1,y-2,cnt+1);
        return res;
    }
}

void solve(){
    int i,j,x,y;
    cin>>x>>y>>x2>>y2;
    memset(vis,-1,sizeof(vis));
    if(dp(x,y,0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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

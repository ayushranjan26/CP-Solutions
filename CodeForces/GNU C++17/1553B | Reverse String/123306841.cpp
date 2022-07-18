#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
string s,t;
int n,m;
bool memo[505][1005][2];
int vis[505][1005][2];
bool dp(int ids,int idt,int dir){
    if(idt==m){
        return true;
    }
    else if(vis[ids][idt][dir]!=-1){
        return memo[ids][idt][dir];
    }
    else if(dir==1){
        bool res=false;
        if(ids!=0&&s[ids-1]==t[idt]){
            res|=dp(ids-1,idt+1,0);
        }
        if(ids!=n&&s[ids+1]==t[idt]){
            res|=dp(ids+1,idt+1,1);
        }
        memo[ids][idt][dir]=res;
        vis[ids][idt][dir]=1;
        return res;
    }
    else{
        bool res=false;
        if(ids!=0&&s[ids-1]==t[idt]){
            res|=dp(ids-1,idt+1,0);
        }
        memo[ids][idt][dir]=res;
        vis[ids][idt][dir]=1;
        return res;
    }
}
void solve(){
    int i,j,k;
    cin>>s>>t;
    memset(memo,0,sizeof(memo));
    memset(vis,-1,sizeof(vis));
    n=s.size(),m=t.size();
    bool res=false;
    for(i=0;i<n;i++){
        if(s[i]==t[0]){
            res|=dp(i,1,1);
        }
    }
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
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
    int i,j,n,m,r,c;
    cin>>n>>m>>r>>c;
    r--,c--;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    bool f=false;
    int ans=2;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='B'){
                f=true;
                if(i==r||j==c){
                    ans=min(ans,1LL);
                }
                if(i==r&&j==c){
                    ans=min(ans,0LL);
                }
            }
        }
    }
    if(f){
        cout<<ans;
    }
    else{
        cout<<-1;
    }
    return;
}
 
int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 
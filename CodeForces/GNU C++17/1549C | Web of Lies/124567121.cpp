#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,m,q;
    cin>>n>>m;
    int larg[n]={0},deg[n]={0};
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        if(y>x){
            larg[x]++;
        }
        else{
            larg[y]++;
        }
        deg[x]++,deg[y]++;
    }
    int ans=0;
    for(i=0;i<n;i++){
        if(larg[i]==0){
            ans++;
        }
    }
    cin>>q;
    while(q--){
        int x,y,z;
        cin>>x;
        if(x==1){
            cin>>y>>z;
            y--,z--;
            if(y>z){
                larg[z]++;
                if(larg[z]==1){
                    ans--;
                }
            }
            else{
                larg[y]++;
                if(larg[y]==1){
                    ans--;
                }
            }
        }
        else if(x==2){
            cin>>y>>z;
            y--,z--;
            if(y>z){
                larg[z]--;
                if(larg[z]==0){
                    ans++;
                }
            }
            else{
                larg[y]--;
                if(larg[y]==0){
                    ans++;
                }
            }
        }
        else{
            cout<<ans<<"\n";
        }
 
    }
    return;
}
 
int main(){
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
 
 
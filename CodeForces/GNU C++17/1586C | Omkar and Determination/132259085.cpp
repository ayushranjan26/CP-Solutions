#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m,q;
    cin>>n>>m;
    string a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[m+1]={0};
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i!=0&&j!=m-1){
                if(a[i][j]=='X'&&a[i-1][j+1]=='X'){
                    pre[j+1]=1;
                }
            }
        }
    }
    for(i=1;i<=m;i++){
        pre[i]+=pre[i-1];
        //cout<<pre[i]<<" ";
    }
    cin>>q;
    while(q--){
        int x1,x2;
        cin>>x1>>x2;
        int d=pre[x2-1]-pre[x1-1];
        //cout<<d<<" ";
        if(d==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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
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
    int i,j,k,n,m,d1;
    cin>>n>>k;
    int a[k],t[k];
    for(i=0;i<k;i++){
        cin>>a[i];
        a[i]--;
    }
    for(i=0;i<k;i++){
        cin>>t[i];
    }
    vector<ll> pre(n,1e15),suf(n,1e15);
    for(i=0;i<k;i++){
        pre[a[i]]=t[i];
        suf[a[i]]=t[i];
    }
    for(i=1;i<n;i++){
        if(pre[i]>pre[i-1]+1){
            pre[i]=pre[i-1]+1;
        }
    }
    for(i=n-2;i>=0;i--){
        if(suf[i]>suf[i+1]+1){
            suf[i]=suf[i+1]+1;
        }
    }
    for(i=0;i<n;i++){
        pre[i]=min(pre[i],suf[i]);
    }
    for(i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
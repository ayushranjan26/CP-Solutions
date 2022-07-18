#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],b[n],ce=0,co=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]%2;
        if(a[i]==0){
            ce++;
        }
        else{
            co++;
        }
        b[i]=a[i];
    }
    if(abs(ce-co)>1){
        cout<<"-1";
        return;
    }
    int ans=1e12,res;
    if(co<=ce){
        res=0;
        int ptr=0;
        for(i=0;i<n;i++){
            ptr=max(ptr,i+1);
            if(b[i]!=i%2){
                while(ptr<n&&b[ptr]==b[i]){
                    ptr++;
                }
                swap(b[i],b[ptr]);
                res+=(ptr-i);
            }
        }
        ans=min(ans,res);
    }
    if(co>=ce){
        res=0;
        int ptr=0;
        for(i=0;i<n;i++){
            ptr=max(ptr,i+1);
            if(a[i]==i%2){
                while(ptr<n&&a[ptr]==a[i]){
                    ptr++;
                }
                swap(a[i],a[ptr]);
                res+=(ptr-i);
            }
        }
        ans=min(ans,res);
    }
    cout<<ans;
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
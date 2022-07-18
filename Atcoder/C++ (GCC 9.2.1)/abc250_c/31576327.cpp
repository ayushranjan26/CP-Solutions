#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;



void solve(){
    int i,j,k,n,q;
    cin>>n>>q;
    int a[n+1],idx[n+1];
    for(i=1;i<=n;i++){
        a[i]=i;
        idx[i]=i;
    }
    while(q--){
        int x;
        cin>>x;
        i=idx[x];
        if(i==n){
            int adj=a[i-1];
            idx[x]=i-1;
            idx[adj]=i;
            swap(a[i],a[i-1]);
        }
        else{
            int adj=a[i+1];
            idx[x]=i+1;
            idx[adj]=i;
            swap(a[i],a[i+1]);
        }
    }
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}


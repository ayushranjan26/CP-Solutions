#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int adj[1000005],a[1000005];
ll v[1000005];
void solve(){
    int i,j,n,d;
    ll k;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll res=0;
    i=0;
    while(k>0){
        if(adj[res%n]!=0){
            int d=i-adj[res%n];
            ll r=res-v[res%n];
            ll p=k/d;
            res+=p*r;
            k=k%d;
        }
        if(k==0){
            break;
        }
        adj[res%n]=i;
        v[res%n]=res;
        res+=a[res%n];
        i++;
        k--;
    }
    cout<<res;
    return;
}

int32_t main(){
    IOS;
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

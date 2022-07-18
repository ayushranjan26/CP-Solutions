 #include <bits/stdc++.h>
 
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int f[10000007],n,k;
 
void func(){
    int i,j;
    for(i=2;i*i<n+k;i++){
        for(j=1;i*i*j<n+k;j++){
            f[i*i*j]=i*i;
        }
    }
}
void solve(){
    int i,j;
    cin>>n>>k;
    func();
    ll res=0;
    for(i=0;i<k;i++){
        if(f[i+n]==0){
            res+=(i+n);
            continue;
        }
        res+=(i+n)/f[i+n];
    }
    cout<<res;
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
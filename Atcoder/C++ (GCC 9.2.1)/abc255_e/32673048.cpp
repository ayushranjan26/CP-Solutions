#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    int s[n-1],x[m];
    for(i=0;i<n-1;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
        cin>>x[i];
    }
    int a[n]={0};
    for(i=1;i<n;i++){
        a[i]=s[i-1]-a[i-1];
    }
    map<int,int> frq;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i%2==0){
                frq[x[j]-a[i]]++;
            }
            else{
                frq[a[i]-x[j]]++;
            }
        }
    }
    int res=0;
    for(auto it:frq){
        res=max(res,it.sd);
       // cout<<it.ft<<" "<<it.sd<<endl;
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

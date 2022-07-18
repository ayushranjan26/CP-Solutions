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
    int i,j,k,n;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[n+1]={0};
    for(i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    map<int,int> mp;
    int res=0;
    mp[0]=1;
    for(i=1;i<=n;i++){
        //cout<<pre[i]<<" "<<res<<endl;
        res+=mp[pre[i]-k];
        mp[pre[i]]++;
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

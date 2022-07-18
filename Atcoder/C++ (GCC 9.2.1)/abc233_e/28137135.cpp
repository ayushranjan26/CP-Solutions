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
    int i,j,n;
    string x;
    cin>>x;
    n=x.size();
    int a[n];
    for(i=0;i<n;i++){
        a[i]=(int)(x[i]-'0');
    }
    int pre[n+1]={0};
    for(i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    int res[n+1]={0};
    int carry=0;
    for(i=n;i>0;i--){
        int d=pre[i]+carry;
        res[i]=d%10;
        carry=d/10;
    }
    res[0]=carry;
    j=0;
    if(res[0]==0){
        j=1;
    }
    for(i=j;i<=n;i++){
        cout<<res[i];
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

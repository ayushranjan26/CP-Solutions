#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

vector<pii> vp[200005];
vector<int> idx[200005];
void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        int l,r;
        l=max(0LL,i-a[i]+1);
        r=min(n-1,i+a[i]-1);
        vp[a[i]].push_back({l,r});
        idx[a[i]].push_back(i);
    }

    for(i=1;i<=n;i++){
        for(j=0;j<(int)vp[i].size()-1;j++){
            vp[i][j].sd=min(vp[i][j].sd, idx[i][j+1]-1);
        }
    }

    int res=0;
    for(i=1;i<=n;i++){
        for(j=0;j<vp[i].size();j++){
            //cout<<i<<" "<<idx[i][j]<<" \n";
            //cout<<i<<" "<<vp[i][j].ft<<" "<<vp[i][j].sd<<endl;
            res+=max(0LL, vp[i][j].sd-vp[i][j].ft+1-i+1);
            //cout<<max(0LL, vp[i][j].sd-vp[i][j].ft+1-i+1)<<endl;
        }
    }

    cout<<res;
    for(i=0;i<=n;i++){
        vp[i].clear();
        idx[i].clear();
    }

    return;
}

int32_t main(){
    IOS;
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

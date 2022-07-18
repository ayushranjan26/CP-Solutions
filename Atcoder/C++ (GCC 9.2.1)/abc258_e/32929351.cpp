#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int dp[200005],vis[200005],n,z;
vector<int> v;
void dfs(int idx){
    //cout<<idx<<" ->";
    if(vis[idx]==1){
        z=idx;
        return;
    }
    vis[idx]=1;
    v.push_back(idx);
    dfs((idx+dp[idx])%n);
}

void solve(){
    int i,j,k,q,x,tot=0,offset=0;
    cin>>n>>q>>x;
    vector<int> w(n);
    for(i=0;i<n;i++){
        cin>>w[i];
        tot+=w[i];
    }
    for(i=0;i<n;i++){
        w.push_back(w[i]);
    }

    if(x>=tot){
        offset=n*(x/tot);
        x=x%tot;
    }
    for(i=1;i<2*n;i++){
        w[i]+=w[i-1];
    }


    for(i=1;i<=n;i++){
        j=lower_bound(w.begin(),w.end(),w[i-1]+x)-w.begin();
        dp[i%n]=offset+j-i+1;
    }
    /*for(i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }*/
    //cout<<endl;
    dfs(0);
    //cout<<endl;
    vector<int> v1,v2;
    for(i=0;i<v.size();i++){
        if(v[i]!=z){
            v1.push_back(v[i]);
        }
        else{
            for(j=i;j<v.size();j++){
                v2.push_back(v[j]);
            }
            break;
        }
    }
    /*for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;*/
    while(q--){
        int d;
        cin>>d;
        d--;
        if(d<v1.size()){
            cout<<dp[v1[d]]<<"\n";
        }
        else{
            d-=v1.size();
            d%=v2.size();
            cout<<dp[v2[d]]<<"\n";
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

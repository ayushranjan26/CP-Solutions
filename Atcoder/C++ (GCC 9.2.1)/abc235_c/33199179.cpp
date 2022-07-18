#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,q;
    cin>>n>>q;
    int a[n];
    map<int,vector<int> > mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i+1);
    }
    while(q--){
        int x,k;
        cin>>x>>k;
        if(k>mp[x].size()){
            cout<<"-1\n";
        }
        else{
            cout<<mp[x][k-1]<<"\n";
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

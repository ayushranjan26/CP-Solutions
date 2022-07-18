#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    vector<pii> vp;
    for(i=n;i>=1;i--){
        int idx=0;
        for(j=0;j<n;j++){
            if(p[j]==i){
                idx=j;
            }
        }
        //cout<<idx<<" ";
        for(j=idx;j<i-1;j++){
            swap(p[j],p[j+1]);
            vp.push_back({j,j+1});
        }
        /*for(j=0;j<n;j++){
            cout<<p[j]<<" ";
        }
        cout<<endl;*/
    }
    cout<<vp.size()<<"\n";
    for(i=0;i<vp.size();i++){
        cout<<vp[i].ft+1<<" "<<vp[i].sd+1<<endl;
    }
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

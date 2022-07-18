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
    int c[11];
    vector<pii> vp;
    for(i=1;i<=9;i++){
        cin>>c[i];
        vp.push_back({c[i],-i});
    }
    sort(vp.begin(),vp.end());
    for(i=0;i<9;i++){
        vp[i].sd=-vp[i].sd;
    }
    string res="";
    int d=n/vp[0].ft;
    for(i=0;i<d;i++){
        res+=(char)('0'+vp[0].sd);
    }
    //cout<<res<<" ";
    d=n%vp[0].ft;
    for(i=0;i<res.size();i++){
        d+=vp[0].ft;
        int mx=-1;
        for(j=vp[0].sd+1;j<=9;j++){
            if(c[j]<=d){
                mx=j;
            }
        }
        if(mx!=-1){
            d-=c[mx];
            res[i]=(char)('0'+mx);
        }
        else{
            break;
        }
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

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
    int i,j,n,m;
    cin>>n>>m;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    vector<pii> v;
    for(i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<m;j++){
            if(s[i][j]=='1'){
                cnt++;
            }
        }
        v.push_back({cnt,i});
    }
    string ss="";
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        ss+=s[v[i].sd];
    }
    //cout<<ss<<" ";
    n=n*m;
    int suf[n+1]={0},res=0;
    for(i=n-1;i>=0;i--){
        suf[i]=suf[i+1];
        if(ss[i]=='0'){
            suf[i]++;
        }
    }
    for(i=0;i<n;i++){
        if(ss[i]=='1'){
            //cout<<suf[i]<<endl;
            res+=suf[i];
        }
    }
    cout<<res;
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

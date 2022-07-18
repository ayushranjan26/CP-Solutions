#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;

void solve(){
    int i,j,k,n;
    string alpha;
    cin>>alpha;
    cin>>n;
    string og[n];
    for(i=0;i<n;i++){
        cin>>og[i];
    }
    map<char,char> mp;
    for(i=0;i<26;i++){
        mp[alpha[i]]=(char)('a'+i);
    }
    vector<pair<string,int>> vp;
    for(i=0;i<n;i++){
        string ss="";
        for(j=0;j<og[i].size();j++){
            ss+=mp[og[i][j]];
        }
        vp.push_back({ss,i});
    }
    sort(vp.begin(),vp.end());
    for(i=0;i<n;i++){
        cout<<og[vp[i].sd]<<"\n";
    }
    return;

}

int32_t main(){
    IOS;
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

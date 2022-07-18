#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j;
    string s,t;
    cin>>s>>t;
    vector<pair<char,int>> vs,vt;
    vs.push_back({s[0],1});
    for(i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            vs.back().sd++;
        }
        else{
            vs.push_back({s[i],1});
        }
    }

    vt.push_back({t[0],1});
    for(i=1;i<t.size();i++){
        if(t[i]==t[i-1]){
            vt.back().sd++;
        }
        else{
            vt.push_back({t[i],1});
        }
    }

    if(vs.size()!=vt.size()){
        cout<<"No";
        return;
    }
    for(i=0;i<vs.size();i++){
        if(vs[i].ft!=vt[i].ft){
            cout<<"No";
            return;
        }
        else if((vs[i].sd!=vt[i].sd&&vs[i].sd==1)||vs[i].sd>vt[i].sd){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
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

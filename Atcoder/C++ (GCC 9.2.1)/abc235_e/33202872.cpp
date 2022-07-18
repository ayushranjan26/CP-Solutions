#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

vector<int> p(200005);//vector to store the parent

void make_set(int v){//initialize the set
    p[v]=v;
}

int find_set(int v){//find the set whom v belongs to
    if(p[v]==v){
        return v;
    }
    p[v]=find_set(p[v]);
    return p[v];
}

void union_set(int a,int b){//merging the two set
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        p[b]=a;
    }
}

void solve(){
    int i,j,n,m,q;
    cin>>n>>m>>q;
    vector<pair<int,pii>> v(m+q);
    for(i=0;i<m;i++){
        cin>>v[i].sd.ft>>v[i].sd.sd>>v[i].ft;
    }
    map<pair<int,pii>,vector<int>> mp;
    for(i=m;i<m+q;i++){
        cin>>v[i].sd.ft>>v[i].sd.sd>>v[i].ft;
        mp[v[i]].push_back(i-m);
    }
    sort(v.begin(),v.end());
    for(i=1;i<=n;i++){
        make_set(i);
    }
    string res[q];
    for(i=0;i<m+q;i++){
        if(find_set(v[i].sd.ft)!=find_set(v[i].sd.sd)){
            //cout<<v[i].ft<<"\n";
            if(mp.find(v[i])!=mp.end()){
                res[mp[v[i]].back()]="Yes";
                mp[v[i]].pop_back();
            }
            else{
                union_set(v[i].sd.ft,v[i].sd.sd);
            }
        }
        else{
            //cout<<v[i].ft<<"x\n";
            if(mp.find(v[i])!=mp.end()){
                res[mp[v[i]].back()]="No";
                mp[v[i]].pop_back();
            }
        }
    }
    for(i=0;i<q;i++){
        cout<<res[i]<<"\n";
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

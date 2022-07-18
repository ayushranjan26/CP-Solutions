#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
const int N=1001;
vector<int> p(N);//vector to store the parent
vector<int> sz(N);
multiset<int> szs;
void make_set(int v){//initialize the set
    p[v]=v;
    sz[v]=1;
    szs.insert(1);
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
        szs.erase(szs.find(sz[a]));
        szs.erase(szs.find(sz[b]));
        sz[a]+=sz[b];
        szs.insert(sz[a]);
    }
}
 
void solve(){
    int i,j,k,n,d;
    cin>>n>>d;
    for(i=1;i<=n;i++){
        make_set(i);
    }
    int x[d],y[d];
    for(i=0;i<d;i++){
        cin>>x[i]>>y[i];
    }
 
    for(i=1;i<=d;i++){
        szs.clear();
        for(j=1;j<=n;j++){
            make_set(j);
        }
        int cnt=1;
        for(j=0;j<i;j++){
            if(find_set(x[j])!=find_set(y[j])){
                union_set(x[j],y[j]);
            }
            else{
                cnt++;
            }
        }
        //cout<<szs.size()<<"- ";
        int ans=0;
        while(cnt&&(!szs.empty())){
            auto it = szs.end();
            it--;
            ans+=*it;
            szs.erase(szs.find(*it));
            cnt--;
        }
        //for(j=1;j<=n;j++){
          //  cout<<sz[j]<<" ";
        //}
        //cout<<endl;
        cout<<ans-1<<"\n";
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
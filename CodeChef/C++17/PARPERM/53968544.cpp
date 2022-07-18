#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

vector<int> p(1e5);//vector to store the parent

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
    int i,j,n,k;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        make_set(i);
    }
    for(i=2;i<=n;i++){
        for(j=i;j<=n;j+=i){
            union_set(i,j);
        }
    }
    int ans=0;
    vector<int> res,rem;
    for(i=1;i<=n;i++){
        if(find_set(i)==find_set(2)){
            res.push_back(i);
        }
        else{
            rem.push_back(i);
        }
    }
    if(rem.size()>=k){
        cout<<"YES\n";
        for(i=0;i<k;i++){
            cout<<rem[i]<<" ";
        }
    }
    else if(res.size()>k){
        cout<<"NO";
    }
    else{
        while(res.size()<k){
            res.push_back(rem.back());
            rem.pop_back();
        }
        cout<<"YES\n";
        for(i=0;i<k;i++){
            cout<<res[i]<<" ";
        }
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

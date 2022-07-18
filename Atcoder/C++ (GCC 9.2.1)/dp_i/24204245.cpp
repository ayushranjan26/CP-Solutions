#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
vector<int> v[100005];
int c[100005];

void dfs(int idx,int prev,int cnt){
    for(int i=0;i<v[idx].size();i++){
        if(v[idx][i]!=prev){
            c[v[idx][i]]=cnt%2;
            dfs(v[idx][i],idx,cnt+1);
        }
    }
    return;
}

void solve(){
    int i,j,k,n,x,y,q;
    cin>>n>>q;
    for(i=0;i<n-1;i++){
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(0,-1,1);
    while(q--){
        cin>>x>>y;
        if(c[x-1]==c[y-1]){
            cout<<"Town\n";
        }
        else{
            cout<<"Road\n";
        }
    }

    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<int> adj[26];
bool vis[26];
bool recSt[26];
stack<int> st;
bool flg=true;
 
void dfs(int idx){
    vis[idx]=true;
    recSt[idx]=true;
    for(int i=0;i<adj[idx].size();i++){
        if(recSt[adj[idx][i]]){
            flg=false;
            return ;
        }
        if(!vis[adj[idx][i]]){
            dfs(adj[idx][i]);
        }
    }
    st.push(idx);
    recSt[idx]=false;
    return ;
}
void solve(){
    int i,j,k,n;
    cin>>n;
    vector<string> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n-1;i++){
        string s=v[i],t=v[i+1];
        j=0;
        while(j<s.size()&&j<t.size()&&s[j]==t[j]){
            j++;
        }
        if(j==s.size()||j==t.size()){
            if(j==t.size()){
                cout<<"Impossible";
                return ;
            }
            continue;
        }
        adj[(int)(s[j]-'a')].push_back((int)(t[j]-'a'));
    }
    for(i=0;i<26;i++){
        vis[i]=false;
        recSt[i]=false;
    }
    for(i=0;i<26;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(!flg){
        cout<<"Impossible";
    }
    else{
        while(!st.empty()){
            cout<<(char)(st.top()+'a');
            st.pop();
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
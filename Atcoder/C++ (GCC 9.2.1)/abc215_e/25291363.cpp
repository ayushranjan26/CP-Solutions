#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+6;

set<string> v;
string s;
int k;

void create_permutation(int vis[],string cur){
    if(cur.size()==s.size()){
        v.insert(cur);
    }
    else{
        string temp;
        for(int i=0;i<s.size();i++){
            if(vis[i]!=1){
                temp=cur;
                temp+=s[i];
                vis[i]=1;
                create_permutation(vis,temp);
                vis[i]=0;
            }
        }
    }
}
void solve(){
    int i,j;
    cin>>s>>k;
    int vis[s.size()]={0};
    string cur="";
    create_permutation(vis,cur);
    for(i=0;i<k-1;i++){
        v.erase(v.begin());
    }
    cout<<*v.begin();
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

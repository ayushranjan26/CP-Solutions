#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

set<pii> st;
int n,m;
vector<pii> vp;
bool f=false;

void per(vector<int> vis,vector<int> v,int cnt){
    if(cnt==n){
        set<pii> st2;
        auto it=st.begin();
        while(it!=st.end()){
            st2.insert({it->ft,it->sd});
            it++;
        }
        //it=st2.begin();
        //while(it!=st2.end()){
            //cout<<it->first<<" "<<it->sd<<endl;
          //  it++;
        //}
        //for(int i=0;i<n;i++){
          //  cout<<v[i]<<" ";
        //}
        //cout<<endl;
        for(int i=0;i<m;i++){
            int c,d;
            c=v[vp[i].ft-1];
            d=v[vp[i].sd-1];
            if(d<c){
                swap(d,c);
            }
            //cout<<c+1<<" - "<<d+1<<" ";
            st2.erase({c+1,d+1});
        }
        //cout<<endl;
        //cout<<"sz "<<st2.size()<<endl<<endl;
        if(st2.empty()){
            f=true;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                vis[i]=1;
                v.push_back(i);
                per(vis,v,cnt+1);
                vis[i]=0;
                v.pop_back();
            }
        }
    }
}

void solve(){
    int i,j;
    cin>>n>>m;
    if(m==0){
        cout<<"Yes";
        return;
    }
    for(i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(b<a){
            swap(a,b);
        }
        st.insert({a,b});
    }
    for(i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(b<a){
            swap(a,b);
        }
        vp.push_back({a,b});
    }
    vector<int> vis(n,0);
    vector<int> v;
    per(vis,v,0);
    if(f){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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

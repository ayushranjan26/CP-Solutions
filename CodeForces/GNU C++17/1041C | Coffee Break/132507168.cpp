#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m,d;
    cin>>n>>m>>d;
    int a[n];
    map<int,int> idx;
    set<int> s;
    for(i=0;i<n;i++){
        cin>>a[i];
        idx[a[i]]=i;
        s.insert(a[i]);
    }
    int res[n]={0};
    int day=1;
    while(!s.empty()){
        auto it=s.begin();
        while((!s.empty())&&it!=s.end()){
            res[idx[*it]]=day;
            auto it2=s.lower_bound(*it+1+d);
            s.erase(it);
            it=it2;
        }
        day++;
    }
    cout<<day-1<<"\n";
    for(i=0;i<n;i++){
        cout<<res[i]<<" ";
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
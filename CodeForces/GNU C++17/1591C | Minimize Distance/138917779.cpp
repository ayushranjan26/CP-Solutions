#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,k;
    cin>>n>>k;
    vector<int> p,m;
    for(i=0;i<n;i++){
        int d;
        cin>>d;
        if(d>0){
            p.push_back(d);
        }
        if(d<0){
            m.push_back(d);
        }
    }
    sort(p.rbegin(),p.rend());
    int dis=0;
    for(i=0;i<p.size();i+=k){
        dis+=2*p[i];
    }
    sort(m.begin(),m.end());
    for(i=0;i<m.size();i+=k){
        dis+=2*abs(m[i]);
    }
    int mx=0;
    if(p.size()>0){
        mx=max(mx,p[0]);
    }
    if(m.size()>0){
        mx=max(mx,abs(m[0]));
    }
    dis-=mx;
    cout<<dis;//<<" "<<mx;
    return;
}
 
int32_t main(){
    //IOS;
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
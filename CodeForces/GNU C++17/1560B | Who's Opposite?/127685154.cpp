#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+5;
const int INF=1e18;
 
vector<int> v;
 
void solve(){
    int i,j,k,a,b,c,d;
    cin>>a>>b>>c;
    if(b<a){
        swap(a,b);
    }
    k=(b-a)*2;
    if(c<=k/2){
        d=c+k/2;
    }
    if(c>k/2){
        d=c-k/2;
    }
    if(b>k){
        cout<<"-1";
        return;
    }
    if(d<0||d>k||c>k){
        cout<<"-1";
        return;
    }
    cout<<d;
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
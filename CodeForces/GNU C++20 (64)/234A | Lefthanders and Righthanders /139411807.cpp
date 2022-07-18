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
    int i,j,n;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n;
    string s;
    cin>>s;
    vector<pii> vp;
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n/2+i]){
            if(s[i]=='R'){
                vp.push_back({n/2+i,i});
            }
            else{
                vp.push_back({i,n/2+i});
            }
        }
        else{
            vp.push_back({i,n/2+i});
        }
    }
    for(i=0;i<n/2;i++){
        cout<<vp[i].ft+1<<" "<<vp[i].sd+1<<endl;
    }
    return;
}
 
int32_t main(){
    IOS;
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
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve(){
    ll i,j,l,k,m,n;
    cin>>n;
    string s;
    cin>>s;
    map<pair<int,int>,int> mp;
    int ans[n]={0};
    int cd=0,ck=0;
    for(i=0;i<n;i++){
        if(s[i]=='K'){
            ck++;
        }
        else{
            cd++;
        }
        if(ck==0||cd==0){
            mp[make_pair(0,0)]++;
            ans[i]=mp[make_pair(0,0)];
        }
        else{
            m=__gcd(ck,cd);
            int x,y;
            x=ck/m,y=cd/m;
            mp[make_pair(x,y)]++;
            ans[i]=mp[make_pair(x,y)];
        }
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return;
}
 
int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
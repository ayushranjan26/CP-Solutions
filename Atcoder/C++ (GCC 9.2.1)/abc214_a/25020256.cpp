#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;

void solve(){
    int i,j,k,n,m;
    string s,t="chokudai";
    cin>>s;
    n=s.size();
    ll f[9]={0};
    for(i=n-1;i>=0;i--){
        for(j=0;j<8;j++){
            if(s[i]==t[j]){
                if(j==7){
                    f[j]++;
                }
                else{
                    f[j]+=f[j+1];
                    f[j]%=mod;
                }
                //cout<<f[j]<<" "<<j<<endl;
            }
        }
    }
    cout<<f[0];
    return;
}
//    c  h  o  k  u  d a i c h o k u d a i c h o k u d a i
//45 36 28 21 15 10 6 3 1 8 7 6 5 4 3 2 1 1 1 1 1 1 1 1 1
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}

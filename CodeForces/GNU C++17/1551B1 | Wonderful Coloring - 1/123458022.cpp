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
    int i,j,n,m;
    string s;
    cin>>s;
    n=s.size();
    int f[26]={0};
    for(i=0;i<n;i++){
        f[(int)(s[i]-'a')]++;
    }
    int res=0;
    for(int i=0;i<26;i++){
        res+=min(f[i],2);
    }
    cout<<res/2;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}